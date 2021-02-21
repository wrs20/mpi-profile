#include <mpi.h>
#include <stdio.h>
#include <list>
#include <deque>
#include <chrono>
#include <string>
#include <iostream>
#include <fstream>

static const std::chrono::high_resolution_clock::time_point global_time_start = std::chrono::high_resolution_clock::now();

static double get_time_since_start(){
    std::chrono::high_resolution_clock::time_point t0 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> ttmp = t0 - global_time_start;
    return (double) ttmp.count();
}

class Record {
    private:
        MPI_Comm comm = MPI_COMM_WORLD;

    public:
        
        double time_start;
        double time_end;
        std::string name;
        int rank;

        Record(const std::string name){
            this->name = name;
        };
        void Init(){
            this->time_start = get_time_since_start();
        }
        void Finalize(){
            this->time_end = get_time_since_start();
            PMPI_Comm_rank(MPI_COMM_WORLD, &this->rank);
        }
        void FinalizeFinalize(){
            this->time_end = get_time_since_start();
        }
        void FinalizeInit(){
            this->time_start = get_time_since_start();
            PMPI_Comm_rank(MPI_COMM_WORLD, &this->rank);
        }
        std::string to_json(){
            std::string b = "[";
            b += "\"" + this->name + "\", ";
            b += std::to_string(this->rank) + ", ";
            b += std::to_string(this->time_start) + ", ";
            b += std::to_string(this->time_end);
            b += "]";
            return b;
        }
};
static std::deque<Record*> event_list;

static void to_json(
    const int rank
){
    
    const std::string basename = "mpi_profile_output_";
    std::ofstream fh;
    fh.open(basename + std::to_string(rank) + ".json");
    

    fh << "{";

    fh << "\"events\":[\n";
    int exi = 0;
    for (const auto &ex : event_list){
        fh << ex->to_json();
        exi++;
        if (exi != event_list.size()){
            fh << ",\n";
        } else {
            fh << "\n";
        }
    }
    fh << "]}\n";
    fh.close();
    return;
}

extern "C" int MPI_Finalize(void ) {
    auto r = new Record("MPI_Finalize");
    r->FinalizeInit();
    int err = PMPI_Finalize();
    r->FinalizeFinalize();
    event_list.push_back(r);
    
    //printf("%ld Events:\n", event_list.size());
    //for (const auto &ex : event_list){
    //    std::cout<<ex->name;
    //    printf(" %d -> %f (%f - %f)\n", ex->rank, ex->time_end - ex->time_start, ex->time_end, ex->time_start);
    //}

    to_json(r->rank);

    for (const auto &ex : event_list){
        delete ex;
    }
    return err;
}
#define MPI_Finalize
#define MPI_Initialized
