import time
import json
import time
import ssl
import pymodbus.client as ModbusClient
from pymodbus import (
    ExceptionResponse,
    Framer,
    ModbusException,
    pymodbus_apply_logging_config,
)
import paho.mqtt.publish
import paho.mqtt.client
from datetime import datetime


CONST_broker_name = "localhost"
CONST_broker_port = 1883
CONST_clientID = "CID"
CONST_topicStr = "ExampleTopic"


def write_json_file(filename, data):
  with open(filename, 'w') as f:
    json.dump(data, f)


def post_json_to_unreal(messageStr):
    # print(type(messageStr))
    print( f"-- Publishing: {messageStr}, to Topic: {CONST_topicStr}, to Broker: {CONST_broker_name}.")
    paho.mqtt.publish.single( CONST_topicStr, payload=messageStr, qos=0, retain=False, hostname=CONST_broker_name, port=CONST_broker_port, client_id=CONST_clientID, keepalive=60, will=None, auth=None, tls=None, protocol=paho.mqtt.client.MQTTv5, transport="tcp" )

'''
    MODBUS BASED FUNCTIONS
'''

def create_tag_structure(memory_dict):

    '''
        Create the tag structure for json dumping
    '''
    tag_structure = {}

    for key, value in memory_dict.items():
        if key == "bits":
            for i in range(0, len(value)):
                # Using zfill to ensure we can support up to 999 tags
                bit_num = "bit_{}".format(str(i).zfill(4))
                tag_structure[bit_num] = str(value[i])

        if key == "uint16":
            for i in range(0, len(value)):
                uint16_num = "uint16_{}".format(str(i).zfill(4))
                tag_structure[uint16_num] = str(value[i])

        if key == "uint32":
            # We are using 2 here as the unit32 take up 2 registers worth of data
            for i in range(0, len(value), 2):
                uint32_num = "uint32_{}".format(str(i).zfill(4))
                temp_string = "{}{}".format(value[i], value[i+1])
                tag_structure[uint32_num] = temp_string

        if key == "float32":
            # We are using 2 here as the float32 take up 2 registers worth of data
            for i in range(0, len(value), 2):
                float32_num = "float_{}".format(str(i).zfill(4))
                temp_string = "{}.{}".format(value[i], value[i+1])
                tag_structure[float32_num] = temp_string

        if key == "strings":
            # We are using 2 here as the strings take up 2 registers worth of data
            for i in range(0, len(value), 2):
                string_num = "num_of_strings_{}".format(str(i).zfill(4))
                tag_structure[string_num] = None

    print(tag_structure)
    
    now = datetime.now()
    tag_structure["timestamp"] = now.strftime("%m/%d/%Y, %H:%M:%S")

    json_tag_structure = json.dumps(tag_structure)

    return json_tag_structure


def read_memory_config_file():
    with open('memory_config.json', 'r') as f:
      data = json.load(f)
    return data


def connect_to_client(host, port, framer=Framer.SOCKET):
	"""Run sync client."""
    # activate debugging
	# pymodbus_apply_logging_config("DEBUG")

	# print("get client")

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

	# print("get and verify data")

	return client


def read_values(client, memory_dict, NUM_OF_REG):

    '''
        Read the values from the modbus webserver and return them in a dict
    '''

    result_dict = {}
    register_list = list(range(1, NUM_OF_REG+1))


    bit_registers = register_list[0:memory_dict["num_of_bits"]]
    # Pop off our used number of registers used for the bits off of our total register list
    register_list = list(set(register_list) - set(register_list[0:memory_dict["num_of_bits"]]))
    register_list.sort()
    # Read the bit values for the selected registers
    bit_values = client.read_input_registers(bit_registers[0], len(bit_registers))
    # print("Bit Values: ", bit_values.registers)
  
    
    uint16_registers = register_list[0:memory_dict["num_of_uint16"]]
    register_list = list(set(register_list) - set(register_list[0:memory_dict["num_of_uint16"]]))
    register_list.sort()
    uint16_values = client.read_holding_registers(uint16_registers[0], len(uint16_registers))
    # print("Uint16 Values: ", uint16_values.registers)
    
    uint32_registers = register_list[0:memory_dict["num_of_uint32"]]
    register_list = list(set(register_list) - set(register_list[0:memory_dict["num_of_uint32"]]))
    register_list.sort()
    uint32_values = client.read_holding_registers(uint32_registers[0], len(uint32_registers))
    # print("Uint32 Values: ", uint32_values.registers)

    float32_registers = register_list[0:memory_dict["num_of_float32"]]
    register_list = list(set(register_list) - set(register_list[0:memory_dict["num_of_float32"]]))
    register_list.sort()
    float32_values = client.read_holding_registers(float32_registers[0], len(float32_registers))
    # print("float32 Values: ", float32_values.registers)


    result_dict["bits"] = bit_values.registers
    result_dict['uint16'] = uint16_values.registers
    result_dict['uint32'] = uint32_values.registers
    result_dict['float32'] = float32_values.registers

    # Strings are currently broken but this shouldn't be an issue for now
    '''
    string_registers = register_list[0:memory_dict["num_of_strings"]]
    register_list = list(set(register_list) - set(register_list[0:memory_dict["num_of_strings"]]))
    register_list.sort()
    string_values = client.read_holding_registers(string_registers[0], len(string_registers))
    print("string Values: ", string_values.registers)
    '''

    return result_dict


def close_client_connection():
	print("close connection")
	client.close()


if __name__ == "__main__":
    client = connect_to_client("127.0.0.1", "5020")
    memory_dict = read_memory_config_file()
    NUM_OF_REG = sum(memory_dict.values())
    # tag_structure, NUM_OF_REG = create_tag_structure(memory_dict)

    while True:
        result_dict = read_values(client, memory_dict, NUM_OF_REG)
        tag_structure = create_tag_structure(result_dict)
        post_json_to_unreal(tag_structure)
        time.sleep(0.05)
