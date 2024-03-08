import time
import json
import pymodbus.client as ModbusClient
from pymodbus import (
    ExceptionResponse,
    Framer,
    ModbusException,
    pymodbus_apply_logging_config,
)

'''
def create_tag_structure(memory_dict):
    # TODO: We may want to optmize this later but its not high priority
    tag_structure = {}

    NUM_OF_REG = sum(memory_dict.values())

    for key, value in memory_dict.items():
        if key == "num_of_bits":
            for i in range(0, value):
                # Using zfill to ensure we can support up to 999 tags
                bit_num = "bit_{}".format(str(i).zfill(3))
                tag_structure[bit_num] = None

        if key == "num_of_uint16":
            for i in range(0, value):
                uint16_num = "uint16_{}".format(str(i).zfill(3))
                tag_structure[uint16_num] = None

        if key == "num_of_uint32":
            # We are using 2 here as the unit32 take up 2 registers worth of data
            for i in range(0, value, 2):
                uint32_num = "uint32_{}".format(str(i).zfill(3))
                tag_structure[uint32_num] = None

        if key == "num_of_float32":
            # We are using 2 here as the float32 take up 2 registers worth of data
            for i in range(0, value, 2):
                float32_num = "float_{}".format(str(i).zfill(3))
                tag_structure[float32_num] = None

        if key == "num_of_strings":
            # We are using 2 here as the strings take up 2 registers worth of data
            for i in range(0, value, 2):
                string_num = "num_of_strings_{}".format(str(i).zfill(3))
                tag_structure[string_num] = None

    # print(tag_structure)
    return tag_structure, NUM_OF_REG
'''


def read_memory_config_file():
    with open('memory_config.json', 'r') as f:
      data = json.load(f)
    return data


def connect_to_client(host, port, framer=Framer.SOCKET):
	"""Run sync client."""
    # activate debugging
	pymodbus_apply_logging_config("DEBUG")

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
        Get the total number of registers
    '''
    register_list = list(range(1, NUM_OF_REG+1))


    bit_registers = register_list[0:memory_dict["num_of_bits"]]
    # Pop off our used number of registers used for the bits off of our total register list
    register_list = list(set(register_list) - set(register_list[0:memory_dict["num_of_bits"]]))
    register_list.sort()
    # Read the bit values for the selected registers
    bit_values = client.read_input_registers(bit_registers[0], len(bit_registers))
    print("Bit Values: ", bit_values.registers)
  
    
    uint16_registers = register_list[0:memory_dict["num_of_uint16"]]
    register_list = list(set(register_list) - set(register_list[0:memory_dict["num_of_uint16"]]))
    register_list.sort()
    uint16_values = client.read_holding_registers(uint16_registers[0], len(uint16_registers))
    print("Uint16 Values: ", uint16_values.registers)
    
    print(register_list)


    '''
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
    '''


def close_client_connection():
	print("close connection")
	client.close()


if __name__ == "__main__":
    client = connect_to_client("127.0.0.1", "5020")
    memory_dict = read_memory_config_file()
    NUM_OF_REG = sum(memory_dict.values())
    # tag_structure, NUM_OF_REG = create_tag_structure(memory_dict)

    while True:
        read_values(client, memory_dict, NUM_OF_REG)
        time.sleep(3)
