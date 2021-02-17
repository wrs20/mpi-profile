import pandas as pd
import sys
import json
import matplotlib.pyplot as plt


if __name__ == "__main__":

    events = []
    for filex in sys.argv[1:]:
        raw_json = json.loads(open(filex).read())
        events += raw_json["events"]

    df = pd.DataFrame(
        events, columns=("name", "rank", "time_start", "time_end")
    )
    df["time_taken"] = df["time_end"] - df["time_start"]


    yheight = 2.0
    yspace = 4.0

    df["ymin"] = (df["rank"] + 1) * yspace - 0.5 * yheight

    df = df.sort_values("time_taken", ascending=False)

    print(df)

    ranks = df["rank"].unique()
    ranks.sort()
    n_ranks = len(ranks)
    
    t_start = df["time_start"].min()
    t_end = df["time_end"].max()


    # Declaring a figure "gnt"
    fig, gnt = plt.subplots(figsize=(1.0 * ((t_end - t_start) * 100), 0.5 * n_ranks))

    # Setting Y-axis limits
    gnt.set_ylim(0, (n_ranks + 1 ) * (yspace))

    # Setting X-axis limits
    gnt.set_xlim(t_start, t_end)

    # Setting labels for x-axis and y-axis
    gnt.set_xlabel("Time (s)")
    gnt.set_ylabel("Rank")

    # Setting ticks on y-axis
    gnt.set_yticks([yspace * (rx + 1) for rx in range(n_ranks)])
    # Labelling tickes of y-axis
    gnt.set_yticklabels([str(rx) for rx in ranks])

    # Setting graph attribute
    gnt.grid(True)

    # Declaring a bar in schedule
    
    it = 0
    for index, row in df.iterrows():
        gnt.broken_barh([(row["time_start"], row["time_taken"])], (row["ymin"], yheight), facecolors=("tab:blue"), edgecolors='black')
        print(it)
        it += 1

    plt.savefig("gantt1.pdf", bbox_inches='tight')
