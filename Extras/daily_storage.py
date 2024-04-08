import json
import time
import ssl
import paho.mqtt.subscribe
import paho.mqtt.client
import pandas as pd
from datetime import datetime
import pyarrow as pa
import pyarrow.parquet as pq


# Constants:
CONST_broker_name = "localhost"
CONST_broker_port = 1883
CONST_clientID = "CID"
CONST_topicStr = "ExampleTopic"


# Create an empty Arrow table
table_data = []
schema = None
    
def on_message( client, userdata, message ):
    global table_data, schema
    
    result_json = None
    decoded_json = message.payload.decode("utf-8")
    json_data = json.loads(decoded_json)
   
    # Convert JSON data to a list of strings
    json_strings = [json.dumps(item) for item in json_data]
    
    # Create Arrow Arrays for timestamp and JSON data
    timestamp_array = pa.array([pd.Timestamp.now()])
    json_array = pa.array([json_strings])
    
    # batch = pa.RecordBatch.from_arrays([timestamp_array, json_array], schema=schema)
    # table_data.append(batch)
    # full_table = pa.Table.from_batches(table_data)
    # save_to_disk(full_table, 'data.parquet')
    # table_data = []
    # print(table_data)
    
    # Create a new table from the received data
    new_table = pa.Table.from_arrays([timestamp_array, json_array], names=["timestamp", "json_data"])
    
    # Get the existing table
    existing_table = pq.read_table("example.parquet")
    
    appended_table = pa.concat_tables([existing_table, new_table])
    pq.write_table(appended_table, "example.parquet", compression=None)
    
    print("Saving data to disk")


def create_schema():
    schema = pa.schema([
        ("timestamp", pa.timestamp('ns')),
        ("json_data", pa.list_(pa.string()))
    ])
    return schema

# Function to save Arrow table to disk
def save_to_disk(table, filename):
    # Replace 'filename' with the path where you want to save the data
    with pa.OSFile(filename, 'wb') as f:
        writer = pa.RecordBatchFileWriter(f, table.schema)
        writer.write_table(table)
        writer.close()


def view_parquet_data():
    table = pq.read_table("example.parquet")
    print(table)


def main():
    global schema
    schema = create_schema()
    # paho.mqtt.subscribe.callback( on_message, CONST_topicStr, hostname=CONST_broker_name )
    view_parquet_data()


if __name__ == "__main__":
    main()
