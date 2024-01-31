#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
An MQTT publisher example.
Copyright 2024 Daniel Conte de Leon, All rights reserved.
"""

import paho.mqtt.publish
import paho.mqtt.client
import time
import ssl
from datetime import datetime

# Constants:
CONST_broker_name = "localhost"
CONST_broker_port = 1883
CONST_clientID = "CID"
CONST_topicStr = "BackwashTopic"

def post_100_timestamp_messages( ):
    for i in range( 100 ):
        time.sleep( 2 )
        messageStr = "Is backwashing"
        print( f"-- Publishing: {messageStr}, to Topic: {CONST_topicStr}, to Broker: {CONST_broker_name}.")
        paho.mqtt.publish.single( CONST_topicStr, payload=messageStr, qos=0, retain=False, hostname=CONST_broker_name, port=CONST_broker_port, client_id=CONST_clientID, keepalive=60, will=None, auth=None, tls=None, protocol=paho.mqtt.client.MQTTv5, transport="tcp" )
    

# Callbacks:
  
def on_publish( client, userdata, mid ):
    print( f"-- Callback: Published message with mid: {str( mid )}." );
    
          
   
# Main:

def main( ):

    # Publish 100 messages on topic:
    post_100_timestamp_messages( );
        

   
if __name__ == '__main__':
    main( );
