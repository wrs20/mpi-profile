int PMPI_Send(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
              MPI_Comm comm)
int PMPI_Recv(void *buf, int count, MPI_Datatype datatype, int source, int tag,
              MPI_Comm comm, MPI_Status *status)
int PMPI_Get_count(const MPI_Status *status, MPI_Datatype datatype, int *count)
int PMPI_Bsend(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
               MPI_Comm comm)
int PMPI_Ssend(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
               MPI_Comm comm)
int PMPI_Rsend(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
               MPI_Comm comm)
int PMPI_Buffer_attach(void *buffer, int size)
int PMPI_Buffer_detach(void *buffer_addr, int *size)
int PMPI_Isend(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
               MPI_Comm comm, MPI_Request *request)
int PMPI_Ibsend(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
                MPI_Comm comm, MPI_Request *request)
int PMPI_Issend(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
                MPI_Comm comm, MPI_Request *request)
int PMPI_Irsend(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
                MPI_Comm comm, MPI_Request *request)
int PMPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source, int tag,
               MPI_Comm comm, MPI_Request *request)
int PMPI_Wait(MPI_Request *request, MPI_Status *status)
int PMPI_Test(MPI_Request *request, int *flag, MPI_Status *status)
int PMPI_Request_free(MPI_Request *request)
int PMPI_Waitany(int count, MPI_Request array_of_requests[], int *indx, MPI_Status *status)
int PMPI_Testany(int count, MPI_Request array_of_requests[], int *indx, int *flag,
                 MPI_Status *status)
int PMPI_Waitall(int count, MPI_Request array_of_requests[], MPI_Status array_of_statuses[])
int PMPI_Testall(int count, MPI_Request array_of_requests[], int *flag,
                 MPI_Status array_of_statuses[])
int PMPI_Waitsome(int incount, MPI_Request array_of_requests[], int *outcount,
                  int array_of_indices[], MPI_Status array_of_statuses[])
int PMPI_Testsome(int incount, MPI_Request array_of_requests[], int *outcount,
                  int array_of_indices[], MPI_Status array_of_statuses[])
int PMPI_Iprobe(int source, int tag, MPI_Comm comm, int *flag, MPI_Status *status)
int PMPI_Probe(int source, int tag, MPI_Comm comm, MPI_Status *status)
int PMPI_Cancel(MPI_Request *request)
int PMPI_Test_cancelled(const MPI_Status *status, int *flag)
int PMPI_Send_init(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
                   MPI_Comm comm, MPI_Request *request)
int PMPI_Bsend_init(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
                    MPI_Comm comm, MPI_Request *request)
int PMPI_Ssend_init(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
                    MPI_Comm comm, MPI_Request *request)
int PMPI_Rsend_init(const void *buf, int count, MPI_Datatype datatype, int dest, int tag,
                    MPI_Comm comm, MPI_Request *request)
int PMPI_Recv_init(void *buf, int count, MPI_Datatype datatype, int source, int tag,
                   MPI_Comm comm, MPI_Request *request)
int PMPI_Start(MPI_Request *request)
int PMPI_Startall(int count, MPI_Request array_of_requests[])
int PMPI_Sendrecv(const void *sendbuf, int sendcount, MPI_Datatype sendtype, int dest,
                  int sendtag, void *recvbuf, int recvcount, MPI_Datatype recvtype,
                  int source, int recvtag, MPI_Comm comm, MPI_Status *status)
int PMPI_Sendrecv_replace(void *buf, int count, MPI_Datatype datatype, int dest,
                          int sendtag, int source, int recvtag, MPI_Comm comm,
                          MPI_Status *status)
int PMPI_Type_contiguous(int count, MPI_Datatype oldtype, MPI_Datatype *newtype)
int PMPI_Type_vector(int count, int blocklength, int stride, MPI_Datatype oldtype,
                     MPI_Datatype *newtype)
int PMPI_Type_hvector(int count, int blocklength, MPI_Aint stride, MPI_Datatype oldtype,
                      MPI_Datatype *newtype)
int PMPI_Type_indexed(int count, const int *array_of_blocklengths,
                      const int *array_of_displacements, MPI_Datatype oldtype,
                      MPI_Datatype *newtype)
int PMPI_Type_hindexed(int count, int *array_of_blocklengths,
                       MPI_Aint *array_of_displacements, MPI_Datatype oldtype,
                       MPI_Datatype *newtype)
int PMPI_Type_struct(int count, int *array_of_blocklengths,
                     MPI_Aint *array_of_displacements,
                     MPI_Datatype *array_of_types, MPI_Datatype *newtype)
int PMPI_Address(void *location, MPI_Aint *address)
int PMPI_Type_extent(MPI_Datatype datatype, MPI_Aint *extent)
int PMPI_Type_size(MPI_Datatype datatype, int *size)
int PMPI_Type_lb(MPI_Datatype datatype, MPI_Aint *displacement)
int PMPI_Type_ub(MPI_Datatype datatype, MPI_Aint *displacement)
int PMPI_Type_commit(MPI_Datatype *datatype)
int PMPI_Type_free(MPI_Datatype *datatype)
int PMPI_Get_elements(const MPI_Status *status, MPI_Datatype datatype, int *count)
int PMPI_Pack(const void *inbuf, int incount, MPI_Datatype datatype, void *outbuf,
              int outsize, int *position, MPI_Comm comm)
int PMPI_Unpack(const void *inbuf, int insize, int *position, void *outbuf, int outcount,
                MPI_Datatype datatype, MPI_Comm comm)
int PMPI_Pack_size(int incount, MPI_Datatype datatype, MPI_Comm comm, int *size)
int PMPI_Barrier(MPI_Comm comm)
int PMPI_Bcast(void *buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm)
int PMPI_Gather(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm)
int PMPI_Gatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                 const int *recvcounts, const int *displs, MPI_Datatype recvtype, int root,
                 MPI_Comm comm)
int PMPI_Scatter(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                 int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm)
int PMPI_Scatterv(const void *sendbuf, const int *sendcounts, const int *displs,
                  MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype,
                  int root, MPI_Comm comm)
int PMPI_Allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                   int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
int PMPI_Allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                    const int *recvcounts, const int *displs, MPI_Datatype recvtype, MPI_Comm comm)
int PMPI_Alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                  int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
int PMPI_Alltoallv(const void *sendbuf, const int *sendcounts, const int *sdispls,
                   MPI_Datatype sendtype, void *recvbuf, const int *recvcounts,
                   const int *rdispls, MPI_Datatype recvtype, MPI_Comm comm)
int PMPI_Alltoallw(const void *sendbuf, const int sendcounts[], const int sdispls[],
                   const MPI_Datatype sendtypes[], void *recvbuf, const int recvcounts[],
                   const int rdispls[], const MPI_Datatype recvtypes[], MPI_Comm comm)
int PMPI_Exscan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                MPI_Op op, MPI_Comm comm)
int PMPI_Reduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                MPI_Op op, int root, MPI_Comm comm)
int PMPI_Op_create(MPI_User_function *user_fn, int commute, MPI_Op *op)
int PMPI_Op_free(MPI_Op *op)
int PMPI_Allreduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                   MPI_Op op, MPI_Comm comm)
int PMPI_Reduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[],
                        MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
int PMPI_Scan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op,
              MPI_Comm comm)
int PMPI_Group_size(MPI_Group group, int *size)
int PMPI_Group_rank(MPI_Group group, int *rank)
int PMPI_Group_translate_ranks(MPI_Group group1, int n, const int ranks1[], MPI_Group group2,
                               int ranks2[])
int PMPI_Group_compare(MPI_Group group1, MPI_Group group2, int *result)
int PMPI_Comm_group(MPI_Comm comm, MPI_Group *group)
int PMPI_Group_union(MPI_Group group1, MPI_Group group2, MPI_Group *newgroup)
int PMPI_Group_intersection(MPI_Group group1, MPI_Group group2, MPI_Group *newgroup)
int PMPI_Group_difference(MPI_Group group1, MPI_Group group2, MPI_Group *newgroup)
int PMPI_Group_incl(MPI_Group group, int n, const int ranks[], MPI_Group *newgroup)
int PMPI_Group_excl(MPI_Group group, int n, const int ranks[], MPI_Group *newgroup)
int PMPI_Group_range_incl(MPI_Group group, int n, int ranges[][3], MPI_Group *newgroup)
int PMPI_Group_range_excl(MPI_Group group, int n, int ranges[][3], MPI_Group *newgroup)
int PMPI_Group_free(MPI_Group *group)
int PMPI_Comm_size(MPI_Comm comm, int *size)
int PMPI_Comm_rank(MPI_Comm comm, int *rank)
int PMPI_Comm_compare(MPI_Comm comm1, MPI_Comm comm2, int *result)
int PMPI_Comm_dup(MPI_Comm comm, MPI_Comm *newcomm)
int PMPI_Comm_dup_with_info(MPI_Comm comm, MPI_Info info, MPI_Comm *newcomm)
int PMPI_Comm_create(MPI_Comm comm, MPI_Group group, MPI_Comm *newcomm)
int PMPI_Comm_split(MPI_Comm comm, int color, int key, MPI_Comm *newcomm)
int PMPI_Comm_free(MPI_Comm *comm)
int PMPI_Comm_test_inter(MPI_Comm comm, int *flag)
int PMPI_Comm_remote_size(MPI_Comm comm, int *size)
int PMPI_Comm_remote_group(MPI_Comm comm, MPI_Group *group)
int PMPI_Intercomm_create(MPI_Comm local_comm, int local_leader, MPI_Comm peer_comm,
                          int remote_leader, int tag, MPI_Comm *newintercomm)
int PMPI_Intercomm_merge(MPI_Comm intercomm, int high, MPI_Comm *newintracomm)
int PMPI_Keyval_create(MPI_Copy_function *copy_fn, MPI_Delete_function *delete_fn,
                       int *keyval, void *extra_state)
int PMPI_Keyval_free(int *keyval)
int PMPI_Attr_put(MPI_Comm comm, int keyval, void *attribute_val)
int PMPI_Attr_get(MPI_Comm comm, int keyval, void *attribute_val, int *flag)
int PMPI_Attr_delete(MPI_Comm comm, int keyval)
int PMPI_Topo_test(MPI_Comm comm, int *status)
int PMPI_Cart_create(MPI_Comm comm_old, int ndims, const int dims[], const int periods[],
                     int reorder, MPI_Comm *comm_cart)
int PMPI_Dims_create(int nnodes, int ndims, int dims[])
int PMPI_Graph_create(MPI_Comm comm_old, int nnodes, const int indx[], const int edges[],
                      int reorder, MPI_Comm *comm_graph)
int PMPI_Graphdims_get(MPI_Comm comm, int *nnodes, int *nedges)
int PMPI_Graph_get(MPI_Comm comm, int maxindex, int maxedges, int indx[], int edges[])
int PMPI_Cartdim_get(MPI_Comm comm, int *ndims)
int PMPI_Cart_get(MPI_Comm comm, int maxdims, int dims[], int periods[], int coords[])
int PMPI_Cart_rank(MPI_Comm comm, const int coords[], int *rank)
int PMPI_Cart_coords(MPI_Comm comm, int rank, int maxdims, int coords[])
int PMPI_Graph_neighbors_count(MPI_Comm comm, int rank, int *nneighbors)
int PMPI_Graph_neighbors(MPI_Comm comm, int rank, int maxneighbors, int neighbors[])
int PMPI_Cart_shift(MPI_Comm comm, int direction, int disp, int *rank_source, int *rank_dest)
int PMPI_Cart_sub(MPI_Comm comm, const int remain_dims[], MPI_Comm *newcomm)
int PMPI_Cart_map(MPI_Comm comm, int ndims, const int dims[], const int periods[], int *newrank)
int PMPI_Graph_map(MPI_Comm comm, int nnodes, const int indx[], const int edges[], int *newrank)
int PMPI_Get_processor_name(char *name, int *resultlen)
int PMPI_Get_version(int *version, int *subversion)
int PMPI_Get_library_version(char *version, int *resultlen)
int PMPI_Errhandler_create(MPI_Handler_function *function, MPI_Errhandler *errhandler)
int PMPI_Errhandler_set(MPI_Comm comm, MPI_Errhandler errhandler)
int PMPI_Errhandler_get(MPI_Comm comm, MPI_Errhandler *errhandler)
int PMPI_Errhandler_free(MPI_Errhandler *errhandler)
int PMPI_Error_string(int errorcode, char *string, int *resultlen)
int PMPI_Error_class(int errorcode, int *errorclass)
double PMPI_Wtime(void)
double PMPI_Wtick(void)
int PMPI_Init(int *argc, char ***argv)
int PMPI_Finalize(void)
int PMPI_Initialized(int *flag)
int PMPI_Abort(MPI_Comm comm, int errorcode)
int PMPI_Close_port(const char *port_name)
int PMPI_Comm_accept(const char *port_name, MPI_Info info, int root, MPI_Comm comm,
                     MPI_Comm *newcomm)
int PMPI_Comm_connect(const char *port_name, MPI_Info info, int root, MPI_Comm comm,
                      MPI_Comm *newcomm)
int PMPI_Comm_disconnect(MPI_Comm *comm)
int PMPI_Comm_get_parent(MPI_Comm *parent)
int PMPI_Comm_join(int fd, MPI_Comm *intercomm)
int PMPI_Comm_spawn(const char *command, char *argv[], int maxprocs, MPI_Info info, int root,
                    MPI_Comm comm, MPI_Comm *intercomm, int array_of_errcodes[])
int PMPI_Comm_spawn_multiple(int count, char *array_of_commands[], char **array_of_argv[],
                             const int array_of_maxprocs[], const MPI_Info array_of_info[],
                             int root, MPI_Comm comm, MPI_Comm *intercomm, int array_of_errcodes[])
int PMPI_Lookup_name(const char *service_name, MPI_Info info, char *port_name)
int PMPI_Open_port(MPI_Info info, char *port_name)
int PMPI_Publish_name(const char *service_name, MPI_Info info, const char *port_name)
int PMPI_Unpublish_name(const char *service_name, MPI_Info info, const char *port_name)
int PMPI_Comm_set_info(MPI_Comm comm, MPI_Info info)
int PMPI_Comm_get_info(MPI_Comm comm, MPI_Info *info)
int PMPI_Accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                    int target_rank, MPI_Aint target_disp, int target_count,
                    MPI_Datatype target_datatype, MPI_Op op, MPI_Win win)
int PMPI_Get(void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
             int target_rank, MPI_Aint target_disp, int target_count,
             MPI_Datatype target_datatype, MPI_Win win)
int PMPI_Put(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
             int target_rank, MPI_Aint target_disp, int target_count,
             MPI_Datatype target_datatype, MPI_Win win)
int PMPI_Win_complete(MPI_Win win)
int PMPI_Win_create(void *base, MPI_Aint size, int disp_unit, MPI_Info info, MPI_Comm comm,
                    MPI_Win *win)
int PMPI_Win_fence(int assert, MPI_Win win)
int PMPI_Win_free(MPI_Win *win)
int PMPI_Win_get_group(MPI_Win win, MPI_Group *group)
int PMPI_Win_lock(int lock_type, int rank, int assert, MPI_Win win)
int PMPI_Win_post(MPI_Group group, int assert, MPI_Win win)
int PMPI_Win_start(MPI_Group group, int assert, MPI_Win win)
int PMPI_Win_test(MPI_Win win, int *flag)
int PMPI_Win_unlock(int rank, MPI_Win win)
int PMPI_Win_wait(MPI_Win win)
int PMPI_Win_allocate(MPI_Aint size, int disp_unit, MPI_Info info, MPI_Comm comm, void *baseptr,
                      MPI_Win *win)
int PMPI_Win_allocate_shared(MPI_Aint size, int disp_unit, MPI_Info info, MPI_Comm comm,
                             void *baseptr, MPI_Win *win)
int PMPI_Win_shared_query(MPI_Win win, int rank, MPI_Aint *size, int *disp_unit, void *baseptr)
int PMPI_Win_create_dynamic(MPI_Info info, MPI_Comm comm, MPI_Win *win)
int PMPI_Win_attach(MPI_Win win, void *base, MPI_Aint size)
int PMPI_Win_detach(MPI_Win win, const void *base)
int PMPI_Win_get_info(MPI_Win win, MPI_Info *info_used)
int PMPI_Win_set_info(MPI_Win win, MPI_Info info)
int PMPI_Get_accumulate(const void *origin_addr, int origin_count,
                         MPI_Datatype origin_datatype, void *result_addr, int result_count,
                         MPI_Datatype result_datatype, int target_rank, MPI_Aint target_disp,
                         int target_count, MPI_Datatype target_datatype, MPI_Op op, MPI_Win win)
int PMPI_Fetch_and_op(const void *origin_addr, void *result_addr,
                       MPI_Datatype datatype, int target_rank, MPI_Aint target_disp,
                       MPI_Op op, MPI_Win win)
int PMPI_Compare_and_swap(const void *origin_addr, const void *compare_addr,
                           void *result_addr, MPI_Datatype datatype, int target_rank,
                           MPI_Aint target_disp, MPI_Win win)
int PMPI_Rput(const void *origin_addr, int origin_count,
               MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp,
               int target_count, MPI_Datatype target_datatype, MPI_Win win,
               MPI_Request *request)
int PMPI_Rget(void *origin_addr, int origin_count,
               MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp,
               int target_count, MPI_Datatype target_datatype, MPI_Win win,
               MPI_Request *request)
int PMPI_Raccumulate(const void *origin_addr, int origin_count,
                      MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp,
                      int target_count, MPI_Datatype target_datatype, MPI_Op op, MPI_Win win,
                      MPI_Request *request)
int PMPI_Rget_accumulate(const void *origin_addr, int origin_count,
                          MPI_Datatype origin_datatype, void *result_addr, int result_count,
                          MPI_Datatype result_datatype, int target_rank, MPI_Aint target_disp,
                          int target_count, MPI_Datatype target_datatype, MPI_Op op, MPI_Win win,
                          MPI_Request *request)
int PMPI_Win_lock_all(int assert, MPI_Win win)
int PMPI_Win_unlock_all(MPI_Win win)
int PMPI_Win_flush(int rank, MPI_Win win)
int PMPI_Win_flush_all(MPI_Win win)
int PMPI_Win_flush_local(int rank, MPI_Win win)
int PMPI_Win_flush_local_all(MPI_Win win)
int PMPI_Win_sync(MPI_Win win)
int PMPI_Add_error_class(int *errorclass)
int PMPI_Add_error_code(int errorclass, int *errorcode)
int PMPI_Add_error_string(int errorcode, const char *string)
int PMPI_Comm_call_errhandler(MPI_Comm comm, int errorcode)
int PMPI_Comm_create_keyval(MPI_Comm_copy_attr_function *comm_copy_attr_fn,
                            MPI_Comm_delete_attr_function *comm_delete_attr_fn, int *comm_keyval,
                            void *extra_state)
int PMPI_Comm_delete_attr(MPI_Comm comm, int comm_keyval)
int PMPI_Comm_free_keyval(int *comm_keyval)
int PMPI_Comm_get_attr(MPI_Comm comm, int comm_keyval, void *attribute_val, int *flag)
int PMPI_Comm_get_name(MPI_Comm comm, char *comm_name, int *resultlen)
int PMPI_Comm_set_attr(MPI_Comm comm, int comm_keyval, void *attribute_val)
int PMPI_Comm_set_name(MPI_Comm comm, const char *comm_name)
int PMPI_File_call_errhandler(MPI_File fh, int errorcode)
int PMPI_Grequest_complete(MPI_Request request)
int PMPI_Grequest_start(MPI_Grequest_query_function *query_fn, MPI_Grequest_free_function *free_fn,
                        MPI_Grequest_cancel_function *cancel_fn, void *extra_state,
                        MPI_Request *request)
int PMPI_Init_thread(int *argc, char ***argv, int required, int *provided)
int PMPI_Is_thread_main(int *flag)
int PMPI_Query_thread(int *provided)
int PMPI_Status_set_cancelled(MPI_Status *status, int flag)
int PMPI_Status_set_elements(MPI_Status *status, MPI_Datatype datatype, int count)
int PMPI_Type_create_keyval(MPI_Type_copy_attr_function *type_copy_attr_fn,
                            MPI_Type_delete_attr_function *type_delete_attr_fn,
                            int *type_keyval, void *extra_state)
int PMPI_Type_delete_attr(MPI_Datatype datatype, int type_keyval)
int PMPI_Type_dup(MPI_Datatype oldtype, MPI_Datatype *newtype)
int PMPI_Type_free_keyval(int *type_keyval)
int PMPI_Type_get_attr(MPI_Datatype datatype, int type_keyval, void *attribute_val, int *flag)
int PMPI_Type_get_contents(MPI_Datatype datatype, int max_integers, int max_addresses,
                           int max_datatypes, int array_of_integers[],
                           MPI_Aint array_of_addresses[], MPI_Datatype array_of_datatypes[])
int PMPI_Type_get_envelope(MPI_Datatype datatype, int *num_integers, int *num_addresses,
                           int *num_datatypes, int *combiner)
int PMPI_Type_get_name(MPI_Datatype datatype, char *type_name, int *resultlen)
int PMPI_Type_set_attr(MPI_Datatype datatype, int type_keyval, void *attribute_val)
int PMPI_Type_set_name(MPI_Datatype datatype, const char *type_name)
int PMPI_Type_match_size(int typeclass, int size, MPI_Datatype *datatype)
int PMPI_Win_call_errhandler(MPI_Win win, int errorcode)
int PMPI_Win_create_keyval(MPI_Win_copy_attr_function *win_copy_attr_fn,
                           MPI_Win_delete_attr_function *win_delete_attr_fn, int *win_keyval,
                           void *extra_state)
int PMPI_Win_delete_attr(MPI_Win win, int win_keyval)
int PMPI_Win_free_keyval(int *win_keyval)
int PMPI_Win_get_attr(MPI_Win win, int win_keyval, void *attribute_val, int *flag)
int PMPI_Win_get_name(MPI_Win win, char *win_name, int *resultlen)
int PMPI_Win_set_attr(MPI_Win win, int win_keyval, void *attribute_val)
int PMPI_Win_set_name(MPI_Win win, const char *win_name)
int PMPI_Alloc_mem(MPI_Aint size, MPI_Info info, void *baseptr)
int PMPI_Comm_create_errhandler(MPI_Comm_errhandler_function *comm_errhandler_fn,
                                MPI_Errhandler *errhandler)
int PMPI_Comm_get_errhandler(MPI_Comm comm, MPI_Errhandler *errhandler)
int PMPI_Comm_set_errhandler(MPI_Comm comm, MPI_Errhandler errhandler)
int PMPI_File_create_errhandler(MPI_File_errhandler_function *file_errhandler_fn,
                                MPI_Errhandler *errhandler)
int PMPI_File_get_errhandler(MPI_File file, MPI_Errhandler *errhandler)
int PMPI_File_set_errhandler(MPI_File file, MPI_Errhandler errhandler)
int PMPI_Finalized(int *flag)
int PMPI_Free_mem(void *base)
int PMPI_Get_address(const void *location, MPI_Aint *address)
int PMPI_Info_create(MPI_Info *info)
int PMPI_Info_delete(MPI_Info info, const char *key)
int PMPI_Info_dup(MPI_Info info, MPI_Info *newinfo)
int PMPI_Info_free(MPI_Info *info)
int PMPI_Info_get(MPI_Info info, const char *key, int valuelen, char *value, int *flag)
int PMPI_Info_get_nkeys(MPI_Info info, int *nkeys)
int PMPI_Info_get_nthkey(MPI_Info info, int n, char *key)
int PMPI_Info_get_valuelen(MPI_Info info, const char *key, int *valuelen, int *flag)
int PMPI_Info_set(MPI_Info info, const char *key, const char *value)
int PMPI_Pack_external(const char datarep[], const void *inbuf, int incount,
                       MPI_Datatype datatype, void *outbuf, MPI_Aint outsize, MPI_Aint *position)
int PMPI_Pack_external_size(const char datarep[], int incount, MPI_Datatype datatype,
                            MPI_Aint *size)
int PMPI_Request_get_status(MPI_Request request, int *flag, MPI_Status *status)
int PMPI_Status_c2f(const MPI_Status *c_status, MPI_Fint *f_status)
int PMPI_Status_f2c(const MPI_Fint *f_status, MPI_Status *c_status)
int PMPI_Type_create_darray(int size, int rank, int ndims, const int array_of_gsizes[],
                            const int array_of_distribs[], const int array_of_dargs[],
                            const int array_of_psizes[], int order, MPI_Datatype oldtype,
                            MPI_Datatype *newtype)
int PMPI_Type_create_hindexed(int count, const int array_of_blocklengths[],
                              const MPI_Aint array_of_displacements[], MPI_Datatype oldtype,
                              MPI_Datatype *newtype)
int PMPI_Type_create_hvector(int count, int blocklength, MPI_Aint stride, MPI_Datatype oldtype,
                             MPI_Datatype *newtype)
int PMPI_Type_create_indexed_block(int count, int blocklength, const int array_of_displacements[],
                                   MPI_Datatype oldtype, MPI_Datatype *newtype)
int PMPI_Type_create_hindexed_block(int count, int blocklength,
                                    const MPI_Aint array_of_displacements[],
                                    MPI_Datatype oldtype, MPI_Datatype *newtype)
int PMPI_Type_create_resized(MPI_Datatype oldtype, MPI_Aint lb, MPI_Aint extent,
                             MPI_Datatype *newtype)
int PMPI_Type_create_struct(int count, const int array_of_blocklengths[],
                            const MPI_Aint array_of_displacements[],
                            const MPI_Datatype array_of_types[], MPI_Datatype *newtype)
int PMPI_Type_create_subarray(int ndims, const int array_of_sizes[],
                              const int array_of_subsizes[], const int array_of_starts[],
                              int order, MPI_Datatype oldtype, MPI_Datatype *newtype)
int PMPI_Type_get_extent(MPI_Datatype datatype, MPI_Aint *lb, MPI_Aint *extent)
int PMPI_Type_get_true_extent(MPI_Datatype datatype, MPI_Aint *true_lb, MPI_Aint *true_extent)
int PMPI_Unpack_external(const char datarep[], const void *inbuf, MPI_Aint insize,
                         MPI_Aint *position, void *outbuf, int outcount, MPI_Datatype datatype)
int PMPI_Win_create_errhandler(MPI_Win_errhandler_function *win_errhandler_fn,
                               MPI_Errhandler *errhandler)
int PMPI_Win_get_errhandler(MPI_Win win, MPI_Errhandler *errhandler)
int PMPI_Win_set_errhandler(MPI_Win win, MPI_Errhandler errhandler)
int PMPI_Type_create_f90_integer(int r, MPI_Datatype *newtype)
int PMPI_Type_create_f90_real(int p, int r, MPI_Datatype *newtype)
int PMPI_Type_create_f90_complex(int p, int r, MPI_Datatype *newtype)
int PMPI_Reduce_local(const void *inbuf, void *inoutbuf, int count, MPI_Datatype datatype,
                      MPI_Op op)
int PMPI_Op_commutative(MPI_Op op, int *commute)
int PMPI_Reduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount,
                              MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
int PMPI_Dist_graph_create_adjacent(MPI_Comm comm_old, int indegree, const int sources[],
                                    const int sourceweights[], int outdegree,
                                    const int destinations[], const int destweights[],
                                    MPI_Info info, int reorder, MPI_Comm *comm_dist_graph)
int PMPI_Dist_graph_create(MPI_Comm comm_old, int n, const int sources[], const int degrees[],
                           const int destinations[], const int weights[], MPI_Info info,
                           int reorder, MPI_Comm *comm_dist_graph)
int PMPI_Dist_graph_neighbors_count(MPI_Comm comm, int *indegree, int *outdegree, int *weighted)
int PMPI_Dist_graph_neighbors(MPI_Comm comm, int maxindegree, int sources[], int sourceweights[],
                              int maxoutdegree, int destinations[], int destweights[])
int PMPI_Improbe(int source, int tag, MPI_Comm comm, int *flag, MPI_Message *message,
                 MPI_Status *status)
int PMPI_Imrecv(void *buf, int count, MPI_Datatype datatype, MPI_Message *message,
                MPI_Request *request)
int PMPI_Mprobe(int source, int tag, MPI_Comm comm, MPI_Message *message, MPI_Status *status)
int PMPI_Mrecv(void *buf, int count, MPI_Datatype datatype, MPI_Message *message,
               MPI_Status *status)
int PMPI_Comm_idup(MPI_Comm comm, MPI_Comm *newcomm, MPI_Request *request)
int PMPI_Ibarrier(MPI_Comm comm, MPI_Request *request)
int PMPI_Ibcast(void *buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm,
                MPI_Request *request)
int PMPI_Igather(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                 int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm,
                 MPI_Request *request)
int PMPI_Igatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                  const int recvcounts[], const int displs[], MPI_Datatype recvtype, int root,
                  MPI_Comm comm, MPI_Request *request)
int PMPI_Iscatter(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                  int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm,
                  MPI_Request *request)
int PMPI_Iscatterv(const void *sendbuf, const int sendcounts[], const int displs[],
                   MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype,
                   int root, MPI_Comm comm, MPI_Request *request)
int PMPI_Iallgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                    int recvcount, MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request)
int PMPI_Iallgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                     const int recvcounts[], const int displs[], MPI_Datatype recvtype,
                     MPI_Comm comm, MPI_Request *request)
int PMPI_Ialltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf,
                   int recvcount, MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request)
int PMPI_Ialltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[],
                    MPI_Datatype sendtype, void *recvbuf, const int recvcounts[],
                    const int rdispls[], MPI_Datatype recvtype, MPI_Comm comm,
                    MPI_Request *request)
int PMPI_Ialltoallw(const void *sendbuf, const int sendcounts[], const int sdispls[],
                    const MPI_Datatype sendtypes[], void *recvbuf, const int recvcounts[],
                    const int rdispls[], const MPI_Datatype recvtypes[], MPI_Comm comm,
                    MPI_Request *request)
int PMPI_Ireduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                 MPI_Op op, int root, MPI_Comm comm, MPI_Request *request)
int PMPI_Iallreduce(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                    MPI_Op op, MPI_Comm comm, MPI_Request *request)
int PMPI_Ireduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[],
                         MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request)
int PMPI_Ireduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount,
                               MPI_Datatype datatype, MPI_Op op, MPI_Comm comm,
                               MPI_Request *request)
int PMPI_Iscan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op,
               MPI_Comm comm, MPI_Request *request)
int PMPI_Iexscan(const void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype,
                 MPI_Op op, MPI_Comm comm, MPI_Request *request)
int PMPI_Ineighbor_allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                             void *recvbuf, int recvcount, MPI_Datatype recvtype,
                             MPI_Comm comm, MPI_Request *request)
int PMPI_Ineighbor_allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                              void *recvbuf, const int recvcounts[], const int displs[],
                              MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request)
int PMPI_Ineighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                            void *recvbuf, int recvcount, MPI_Datatype recvtype, MPI_Comm comm,
                            MPI_Request *request)
int PMPI_Ineighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[],
                             MPI_Datatype sendtype, void *recvbuf, const int recvcounts[],
                             const int rdispls[], MPI_Datatype recvtype, MPI_Comm comm,
                             MPI_Request *request)
int PMPI_Ineighbor_alltoallw(const void *sendbuf, const int sendcounts[],
                             const MPI_Aint sdispls[], const MPI_Datatype sendtypes[],
                             void *recvbuf, const int recvcounts[], const MPI_Aint rdispls[],
                             const MPI_Datatype recvtypes[], MPI_Comm comm, MPI_Request *request)
int PMPI_Neighbor_allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                            void *recvbuf, int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
int PMPI_Neighbor_allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                             void *recvbuf, const int recvcounts[], const int displs[],
                             MPI_Datatype recvtype, MPI_Comm comm)
int PMPI_Neighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                           void *recvbuf, int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
int PMPI_Neighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[],
                            MPI_Datatype sendtype, void *recvbuf, const int recvcounts[],
                            const int rdispls[], MPI_Datatype recvtype, MPI_Comm comm)
int PMPI_Neighbor_alltoallw(const void *sendbuf, const int sendcounts[], const MPI_Aint sdispls[],
                            const MPI_Datatype sendtypes[], void *recvbuf, const int recvcounts[],
                            const MPI_Aint rdispls[], const MPI_Datatype recvtypes[],
                            MPI_Comm comm)
int PMPI_Comm_split_type(MPI_Comm comm, int split_type, int key, MPI_Info info, MPI_Comm *newcomm)
int PMPI_Comm_create_group(MPI_Comm comm, MPI_Group group, int tag, MPI_Comm *newcomm)
int PMPI_Get_elements_x(const MPI_Status *status, MPI_Datatype datatype, MPI_Count *count)
int PMPI_Status_set_elements_x(MPI_Status *status, MPI_Datatype datatype, MPI_Count count)
int PMPI_Type_get_extent_x(MPI_Datatype datatype, MPI_Count *lb, MPI_Count *extent)
int PMPI_Type_get_true_extent_x(MPI_Datatype datatype, MPI_Count *lb, MPI_Count *extent)
int PMPI_Type_size_x(MPI_Datatype datatype, MPI_Count *size)
MPI_Aint PMPI_Aint_add(MPI_Aint base, MPI_Aint disp)
MPI_Aint PMPI_Aint_diff(MPI_Aint addr1, MPI_Aint addr2)
int PMPI_T_init_thread(int required, int *provided)
int PMPI_T_finalize(void)
int PMPI_T_enum_get_info(MPI_T_enum enumtype, int *num, char *name, int *name_len)
int PMPI_T_enum_get_item(MPI_T_enum enumtype, int indx, int *value, char *name, int *name_len)
int PMPI_T_cvar_get_num(int *num_cvar)
int PMPI_T_cvar_get_info(int cvar_index, char *name, int *name_len, int *verbosity,
                         MPI_Datatype *datatype, MPI_T_enum *enumtype, char *desc, int *desc_len,
                         int *binding, int *scope)
int PMPI_T_cvar_handle_alloc(int cvar_index, void *obj_handle, MPI_T_cvar_handle *handle,
                             int *count)
int PMPI_T_cvar_handle_free(MPI_T_cvar_handle *handle)
int PMPI_T_cvar_read(MPI_T_cvar_handle handle, void *buf)
int PMPI_T_cvar_write(MPI_T_cvar_handle handle, const void *buf)
int PMPI_T_pvar_get_num(int *num_pvar)
int PMPI_T_pvar_get_info(int pvar_index, char *name, int *name_len, int *verbosity, int *var_class,
                         MPI_Datatype *datatype, MPI_T_enum *enumtype, char *desc, int *desc_len,
                         int *binding, int *readonly, int *continuous, int *atomic)
int PMPI_T_pvar_session_create(MPI_T_pvar_session *session)
int PMPI_T_pvar_session_free(MPI_T_pvar_session *session)
int PMPI_T_pvar_handle_alloc(MPI_T_pvar_session session, int pvar_index, void *obj_handle,
                             MPI_T_pvar_handle *handle, int *count)
int PMPI_T_pvar_handle_free(MPI_T_pvar_session session, MPI_T_pvar_handle *handle)
int PMPI_T_pvar_start(MPI_T_pvar_session session, MPI_T_pvar_handle handle)
int PMPI_T_pvar_stop(MPI_T_pvar_session session, MPI_T_pvar_handle handle)
int PMPI_T_pvar_read(MPI_T_pvar_session session, MPI_T_pvar_handle handle, void *buf)
int PMPI_T_pvar_write(MPI_T_pvar_session session, MPI_T_pvar_handle handle, const void *buf)
int PMPI_T_pvar_reset(MPI_T_pvar_session session, MPI_T_pvar_handle handle)
int PMPI_T_pvar_readreset(MPI_T_pvar_session session, MPI_T_pvar_handle handle, void *buf)
int PMPI_T_category_get_num(int *num_cat)
int PMPI_T_category_get_info(int cat_index, char *name, int *name_len, char *desc, int *desc_len,
                             int *num_cvars, int *num_pvars, int *num_categories)
int PMPI_T_category_get_cvars(int cat_index, int len, int indices[])
int PMPI_T_category_get_pvars(int cat_index, int len, int indices[])
int PMPI_T_category_get_categories(int cat_index, int len, int indices[])
int PMPI_T_category_changed(int *stamp)
int PMPI_T_cvar_get_index(const char *name, int *cvar_index)
int PMPI_T_pvar_get_index(const char *name, int var_class, int *pvar_index)
int PMPI_T_category_get_index(const char *name, int *cat_index)
