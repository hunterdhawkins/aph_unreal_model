import os
import json
import pyarrow as pa
import pyarrow.parquet as pq


def handle_control_method():
	pass


def read_json_file(filename):
    with open(filename, 'r') as f:
      data = json.load(f)
    return data


def write_json_file(filename, data):
  with open(filename, 'w') as f:
    json.dump(data, f)


def view_parquet_data():
    # Move up one directory to get access to parquet file
    os.chdir("..")
    # today = datetime.today()
    # today = today.strftime("%m-%d-%y")
    # daily_file_name = "{}.parquet".format(today)
    table = pq.read_table("04-10-24.parquet")
    print(table)