import json
import time
import ssl
import paho.mqtt.subscribe
import paho.mqtt.client
import pandas as pd
from datetime import datetime
import pyarrow as pa
import pyarrow.parquet as pq

'''
# Constants:
CONST_broker_name = "localhost"
CONST_broker_port = 1883
CONST_clientID = "CID"
CONST_topicStr = "ExampleTopic"
    

# def arrow_example():
#     days = pa.array([1, 12, 17, 23, 28], type=pa.int8())
#     months = pa.array([1, 3, 5, 7, 1], type=pa.int8())
#     years = pa.array([1990, 2000, 1995, 2000, 1995], type=pa.int16())
#     birthdays_table = pa.table([days, months, years], names=["days", "months", "years"])
#     pq.write_table(birthdays_table, 'birthdays.parquet')

def create_db_schema():
    schema = pa.schema([
        ("timestamp", pa.timestamp('ms')),
        ("json_data", pa.string()),
    ])
    return schema


def save_json_data(table, filename):
    with pa.OSFile(filename, 'wb') as f:
        writer = pa.RecordBatchFileWriter(f, table.schema)
        writer.write_table(table)
        writer.close()


def on_message( client, userdata, message ):
    result_json = None
    print(str(message.payload));
    decoded_json = message.payload.decode("utf-8")
    result_json = json.loads(decoded_json)
    print(result_json)


def main():
    db_schema = create_db_schema()
    paho.mqtt.subscribe.callback( on_message, CONST_topicStr, hostname=CONST_broker_name )
    # arrow_example()


if __name__ == '__main__':
    main()
'''

import pyarrow as pa
import pandas as pd
import json
import time

# Define schema
schema = pa.schema([
    ("timestamp", pa.timestamp('ns')),
    ("json_data", pa.list_(pa.string()))
])

# Function to collect JSON data
def collect_json_data():
    # Replace this with your JSON data collection logic
    return [{"key": "value1"}, {"key": "value2"}, {"key": "value3"}]

# Function to save Arrow table to disk
def save_to_disk(table, filename):
    # Replace 'filename' with the path where you want to save the data
    with pa.OSFile(filename, 'wb') as f:
        writer = pa.RecordBatchFileWriter(f, table.schema)
        writer.write_table(table)
        writer.close()

# Create an empty Arrow table
table_data = []

# Main loop
while True:
    # Collect JSON data
    json_data = collect_json_data()
    
    # Convert JSON data to a list of strings
    json_strings = [json.dumps(item) for item in json_data]
    
    # Create Arrow Arrays for timestamp and JSON data
    timestamp_array = pa.array([pd.Timestamp.now()])
    json_array = pa.array([json_strings])
    
    # Create Arrow Table
    batch = pa.RecordBatch.from_arrays([timestamp_array, json_array], schema=schema)
    table_data.append(batch)
    
    # Check if table size exceeds a certain limit or if a certain time interval has passed
    if len(table_data) >= 5:  # Example limit of 1000 records
        # Concatenate all batches into a single table
        full_table = pa.Table.from_batches(table_data)
        
        # Save the table to disk
        save_to_disk(full_table, 'data.parquet')
        
        # Clear table_data
        table_data = []
    
    # Sleep for a specified time interval before collecting data again
    time.sleep(1)  # Sleep for 60 seconds before collecting data again
    print(table_data)
