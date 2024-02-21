'''
    In this script we are leveraging the code Dr. Daniel Conte de Leon provided us
'''
import paho.mqtt.publish
import paho.mqtt.client
import time
import ssl
from datetime import datetime

# Constants:
CONST_broker_name = "localhost"
CONST_broker_port = 1883
CONST_clientID = "CID"
CONST_topicStr = "ExampleTopic"


def post_100_timestamp_messages( ):
    for i in range( 100 ):
        time.sleep( 2 )
        messageStr = str( datetime.now() )
        print( f"-- Publishing: {messageStr}, to Topic: {CONST_topicStr}, to Broker: {CONST_broker_name}.")
        paho.mqtt.publish.single( CONST_topicStr, payload=messageStr, qos=0, retain=False, hostname=CONST_broker_name, port=CONST_broker_port, client_id=CONST_clientID, keepalive=60, will=None, auth=None, tls=None, protocol=paho.mqtt.client.MQTTv5, transport="tcp" )


def on_publish( client, userdata, mid ):
    print( f"-- Callback: Published message with mid: {str( mid )}." );
    

def main( ):
    post_100_timestamp_messages( );
  
 
if __name__ == '__main__':
    main( );