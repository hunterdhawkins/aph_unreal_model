import os
import json
import pyarrow as pa
import pyarrow.parquet as pq
import pandas as pd
import numpy as np
from django.conf import settings


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

    result_timestamp_list = []
    result_value_list = []
    # Move up one directory to get access to parquet file
    # os.chdir("..")
    
    # today = datetime.today()
    # today = today.strftime("%m-%d-%y")
    # daily_file_name = "{}.parquet".format(today)
    
    parquet_data = os.path.join(settings.BASE_DIR, "External-Data/04-15-24.parquet")
    
    table = pq.read_table(parquet_data)
    df = table.to_pandas()

    for index, row in df.iterrows():
        timestamp = row["timestamp"]
        timestamp = timestamp.to_pydatetime()
        timestamp = timestamp.strftime("%m/%d/%Y, %H:%M:%S")
        for i in range(0, len(row["tag_names"])):
            if row["tag_names"][i] == tag_name:
                result_timestamp_list.append(timestamp)
                result_value_list.append(row["tag_values"][i])

    return result_timestamp_list, result_value_list
    

def get_memory_config():
    simulated_modbus_mem_config = os.path.join(settings.BASE_DIR, "External-Data/memory_config.json")
    config = read_json_file(simulated_modbus_mem_config)
    # EX config {"num_of_bits": 100, "num_of_uint16": 100, "num_of_uint32": 100, "num_of_float32": 100, "num_of_strings": 0}
    print(config)
    
