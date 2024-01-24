#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
An MQTT publisher example.
Copyright 2024 Daniel Conte de Leon, All rights reserved.
"""

import paho.mqtt.subscribe
import paho.mqtt.client
import time
import ssl
from datetime import datetime

# Constants:
CONST_broker_name = "localhost"
CONST_broker_port = 1883
CONST_clientID = "CID"
CONST_topicStr = "ExampleTopic"

# Callbacks:
  
def on_message( client, userdata, message ):
    print( f"-- Callback: Received message: {str( message.payload )}, on Topic: {str(message.topic )}." );  
   
  
# Main:

def main( ):
    
    # Create the client instance, subscribe, and bind callback:
    paho.mqtt.subscribe.callback( on_message, CONST_topicStr, hostname=CONST_broker_name )
   
    
if __name__ == '__main__':
    main( );    