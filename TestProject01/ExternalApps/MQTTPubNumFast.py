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
from timeit import default_timer as timeitTimer

# Constants:
CONST_broker_address = "127.0.0.1";
CONST_broker_port = 1883;
CONST_clientID = "CID";
CONST_topicStr = "ExampleTopic";
CONST_number_of_messages = 1000000;
CONST_message_size = 1024*8;

# Create MQTT Client:
client = paho.mqtt.client.Client( "ID" );
message = str( 'A' * CONST_message_size );

# Callbacks:
  
def on_connect( client, userdata, flags, rc ):
    if ( rc == 0 ):
        print( "-- Callback: Connected to MQTT broker." );
    else:
        print( f"-- Callback: Failed to connect to MQTT broker; Return code: {rc}." );

def on_disconnect( client, userdata, mid ):
    print( "-- Callback: Disconnected." );

def on_publish( client, userdata, mid ):
    pass;
    ## print( f"-- Callback: Published message with mid: {str( mid )}." );


# Functions:

def connect():
    client.connect( host=CONST_broker_address, port=CONST_broker_port );
    client.on_connect = on_connect;
    client.on_disconnect = on_disconnect;
    client.on_publish = on_publish;

def disconnect():
    client.on_disconnect = on_disconnect;
    client.disconnect( );
        
def post_single_message( messageStr ):
    print( f"-- Publishing: {messageStr}, to Topic: {CONST_topicStr}, to Broker: {CONST_broker_address}.");
    paho.mqtt.publish.single( CONST_topicStr, payload=messageStr, qos=0, retain=False, hostname=CONST_broker_address, port=CONST_broker_port, client_id=CONST_clientID, keepalive=60, will=None, auth=None, tls=None, protocol=paho.mqtt.client.MQTTv5, transport="tcp" );
    
def post_multiple_messages( ):
    for i in range( CONST_number_of_messages ):
        # print( f"-- Publishing: {message}, to Topic: {CONST_topicStr}, to Broker: {CONST_broker_address}.");
        client.publish( topic=CONST_topicStr, payload=message );
    


     
   
# Main:

def main( ):
    print( f"Posting { CONST_number_of_messages } messages to MQTT." );
    connect();
    startTimeIT = timeitTimer()
    startTimeTM = time.perf_counter_ns();
    post_multiple_messages( );
    endTimeIT = timeitTimer();
    endTimeTM = time.perf_counter_ns();
    disconnect();
    elapsedTimeSecIT =  ( endTimeIT - startTimeIT );
    elapsedTimeSecTM =  ( endTimeTM - startTimeTM );
    postingRate = CONST_number_of_messages / elapsedTimeSecIT ;    
    print( f"DONE:" );
    print( f"-- Elapsed time IT: { elapsedTimeSecIT } seconds." );
    print( f"-- Elapsed time TM: { elapsedTimeSecTM } nanoseconds or { elapsedTimeSecTM / 1000000000 } seconds." );    
    print( f"-- MQTT posting rate: { postingRate } messages/s." );
    print( f"-- MQTT posting rate: { postingRate * len( message ) / 1000000 } Mchars/s." );

        

   
if __name__ == '__main__':
    main( );
