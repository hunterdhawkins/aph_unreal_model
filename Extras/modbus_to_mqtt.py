'''
    In this script we are leveraging the code Dr. Daniel Conte de Leon provided us
'''

import paho.mqtt.publish
import paho.mqtt.client
import time
import ssl
import json
from datetime import datetime
import pymodbus.client as ModbusClient
from pymodbus import (
    ExceptionResponse,
    Framer,
    ModbusException,
    pymodbus_apply_logging_config,
)


# Constants:
CONST_broker_name = "localhost"
CONST_broker_port = 1883
CONST_clientID = "CID"
CONST_topicStr = "ExampleTopic"


def on_publish( client, userdata, mid ):
    print( f"-- Callback: Published message with mid: {str( mid )}." );


def read_json_config_file():
    with open('memory_config.json', 'r') as f:
        data = json.load(f)
    return data


def connect_to_client(host, port, framer=Framer.SOCKET):
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

	print("connecting to client")
	client.connect()

	print("get and verify data")

	return client


def read_values_and_send_via_mqtt(client):
    while True:
        try:
            bits = client.read_input_registers(1,2)
            print(bits.registers)
            holding_registers = client.read_holding_registers(3)
            print(holding_registers.registers)
            
        except ModbusException as exc:
            print(f"Received ModbusException({exc}) from library")
            client.close()
            return
        if bits.isError():
            print(f"Received Modbus library error({bits})")
            client.close()
            return
        if isinstance(bits, ExceptionResponse):
            print(f"Received Modbus library exception ({bits})")
            # THIS IS NOT A PYTHON EXCEPTION, but a valid modbus message
            client.close()

        time.sleep(1)
        print( f"-- Publishing: {str(bits.registers)}, to Topic: {CONST_topicStr}, to Broker: {CONST_broker_name}.")
        paho.mqtt.publish.single( CONST_topicStr, payload=str(bits.registers), qos=0, retain=False, hostname=CONST_broker_name, port=CONST_broker_port, client_id=CONST_clientID, keepalive=60, will=None, auth=None, tls=None, protocol=paho.mqtt.client.MQTTv5, transport="tcp" )


def close_client_connection():
	print("close connection")
	client.close()


def main():
    client = connect_to_client("127.0.0.1", "5020")
    memory_config = read_json_config_file()
    print(memory_config)
    read_values_and_send_via_mqtt(client)


if __name__ == "__main__":
    main()
