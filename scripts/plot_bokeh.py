import pandas as pd
import sys
import json

from math import ceil
import numpy as np
from bokeh.io import show, curdoc, output_file
from bokeh.models import ColumnDataSource, LinearAxis, Grid, HBar, LinearAxis, WheelZoomTool, HoverTool
from bokeh.palettes import GnBu3, OrRd3
from bokeh.plotting import figure

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


    source = ColumnDataSource(df)

    plot = figure(
        #title=None, plot_width=max(ceil(8000 * (t_end - t_start)), 300), plot_height=80*n_ranks,
        #min_border=0,
        sizing_mode="stretch_both",
        tools="pan,wheel_zoom, reset",
        active_scroll="wheel_zoom",
        )

    glyph = HBar(y="rank", right="time_end", left="time_start", height=0.5, fill_color="#b3de69")
    plot.add_glyph(source, glyph)

    plot.add_tools(HoverTool(
        tooltips=[
            ( "name",   "@name" ),
            ( "time_start", "@time_start"),
            ( "time_taken", "@time_taken"),
        ],
    ))



    curdoc().add_root(plot)
    
    output_file("interactive_test.html")
    show(plot)

    
