import json
import time
import ssl
import paho.mqtt.subscribe
import paho.mqtt.client
from datetime import datetime
import pyarrow as pa
import pyarrow.parquet as pq


# Constants:
CONST_broker_name = "localhost"
CONST_broker_port = 1883
CONST_clientID = "CID"
CONST_topicStr = "ExampleTopic"
    

def arrow_example():
    days = pa.array([1, 12, 17, 23, 28], type=pa.int8())
    months = pa.array([1, 3, 5, 7, 1], type=pa.int8())
    years = pa.array([1990, 2000, 1995, 2000, 1995], type=pa.int16())
    birthdays_table = pa.table([days, months, years], names=["days", "months", "years"])
    pq.write_table(birthdays_table, 'birthdays.parquet')

  
def on_message( client, userdata, message ):
    result_json = None
    print(str(message.payload));
    decoded_json = message.payload.decode("utf-8")
    result_json = json.loads(decoded_json)
    print(result_json)


def main():
    # paho.mqtt.subscribe.callback( on_message, CONST_topicStr, hostname=CONST_broker_name )
    arrow_example()


if __name__ == '__main__':
    main()