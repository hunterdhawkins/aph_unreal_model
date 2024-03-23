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

'''
class Person(Model):
    name = CharField()
    birthday = DateField()

    class Meta:
        database = db # This model uses the "people.db" database.

uncle_bob = Person(name='Bob', birthday=date(1960, 1, 15))
uncle_bob.save() # bob is now stored in the database
'''


class APH(Model):
    data = JSONField()
    class Meta:
        database = db
    
def save_reading():
    pass
    
    
def connect_to_db():
    db.connect()

# Callbacks:
  
def on_message( client, userdata, message ):
    print( f"-- Callback: Received message: {str( message.payload )}, on Topic: {str(message.topic )}." );  
   

def main():
    connect_to_db()
    db.create_tables([APH])

    paho.mqtt.subscribe.callback( on_message, CONST_topicStr, hostname=CONST_broker_name )



if __name__ == '__main__':
    main()