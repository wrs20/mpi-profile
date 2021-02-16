import pandas as pd
import sys
import json



if __name__ == '__main__':
    
    raw_json = json.loads(open(sys.argv[1]).read())
    

    df = pd.DataFrame(raw_json['events'], columns=('name', 'rank', 'time_start', 'time_end'))
    df['time_taken'] = df['time_end'] - df['time_start']
    df = df.sort_values('time_taken', ascending=False)

    print(df)



