import json
import time
import ssl
from peewee import *
from playhouse.sqlite_ext import *
import paho.mqtt.subscribe
import paho.mqtt.client
from datetime import datetime

# Constants:
CONST_broker_name = "localhost"
CONST_broker_port = 1883
CONST_clientID = "CID"
CONST_topicStr = "ExampleTopic"

# TODO: In future may want to make db not global, but for now it works

db = SqliteDatabase('aph_testing.db')


class APH(Model):
    data = JSONField()
    class Meta:
        database = db

    
def save_reading():
    pass
    
    
def connect_to_db():
    db.connect()

  
def on_message( client, userdata, message ):
    result_json = None
    print(str(message.payload));
    decoded_json = message.payload.decode("utf-8")
    result_json = json.loads(decoded_json)
    reading = APH(data = result_json)
    reading.save()


def main():
    connect_to_db()
    db.create_tables([APH])

    paho.mqtt.subscribe.callback( on_message, CONST_topicStr, hostname=CONST_broker_name )


if __name__ == '__main__':
    main()