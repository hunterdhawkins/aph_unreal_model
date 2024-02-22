'''
    In this script we are leveraging the code Dr. Daniel Conte de Leon provided us
'''
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
'''
'''
from pymodbus.client import ModbusTcpClient

def main():
	client = ModbusTcpClient('localhost') 
	client.connect()        
	result = client.read_coils(1, 1, slave=1)
	print(result.bits[0])
	client.close()                             

if __name__ == '__main__':
    main( );
'''

import pymodbus.client as ModbusClient
from pymodbus import (
    ExceptionResponse,
    Framer,
    ModbusException,
    pymodbus_apply_logging_config,
)


def run_sync_simple_client(host, port, framer=Framer.SOCKET):
    """Run sync client."""
    # activate debugging
    pymodbus_apply_logging_config("DEBUG")

    print("get client")

    client = ModbusClient.ModbusTcpClient(
        host,
        port=port,
        framer=framer,
        # timeout=10,
        # retries=3,
        # retry_on_empty=False,y
        # source_address=("localhost", 0),
    )

    print("connect to server")
    client.connect()

    print("get and verify data")
    try:
        # rr = client.read_coils(1, 1, slave=1)
        # rr = client.read_coils(1)
        rr = client.read_input_registers(1)
        print(rr.__dict__)
        print(rr.registers)
    except ModbusException as exc:
        print(f"Received ModbusException({exc}) from library")
        client.close()
        return
    if rr.isError():
        print(f"Received Modbus library error({rr})")
        client.close()
        return
    if isinstance(rr, ExceptionResponse):
        print(f"Received Modbus library exception ({rr})")
        # THIS IS NOT A PYTHON EXCEPTION, but a valid modbus message
        client.close()

    print("close connection")
    client.close()


if __name__ == "__main__":
    # run_sync_simple_client("127.0.0.1", "5020")
    run_sync_simple_client("127.0.0.1", "5020")