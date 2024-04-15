import os
import json
import pyarrow as pa
import pyarrow.parquet as pq
import pandas as pd
import numpy as np


def handle_control_method():
	pass


def read_json_file(filename):
    with open(filename, 'r') as f:
      data = json.load(f)
    return data


def write_json_file(filename, data):
  with open(filename, 'w') as f:
    json.dump(data, f)


def view_parquet_data(tag_name):
    # Move up one directory to get access to parquet file
    os.chdir("..")
    # today = datetime.today()
    # today = today.strftime("%m-%d-%y")
    # daily_file_name = "{}.parquet".format(today)
    
    table = pq.read_table("04-15-24.parquet")
    df = table.to_pandas()

    
    # df['index_of_element'] = df['tag_names'].apply(lambda x: np.where(x == tag_name) if tag_name in x else None)
    # print(type(df['index_of_element'][0]))
    # index_list = df['index_of_element'].tolist()
    # location = index_list[0][0][0]
    
 
    for index, row in df.iterrows():
        timestamp = row["timestamp"]
        for i in range(0, len(row["tag_names"])):
            print(row["tag_names"][i], " : ",  tag_name)
            if row["tag_names"][i] == tag_name:
                print("Found tag in tag name list ", tag_name)
            
            # print(row["timestamp"], row["tag_names"], row["tag_values"])
    
