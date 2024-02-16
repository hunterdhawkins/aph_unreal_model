import asyncio
import json
import pprint
import sys
from pymodbus.server import ModbusSimulatorServer

# PyModBus Documentation: https://pymodbus.readthedocs.io/en/latest/source/library/simulator/config.html

async def run(config_file_name):
   simulator = ModbusSimulatorServer(
      modbus_server = "server",
      modbus_device = "my device",
      http_host = "localhost",
      http_port =  8000,
      json_file = config_file_name
    )

   await simulator.run_forever()


def write_json_config_file(json_config_dict):
    config_file_name = "custom_config.json"
    with open(config_file_name, 'w') as json_file:
      json.dump(json_config_dict, json_file)
     
    return config_file_name 
 
 
def read_json_config_file():
    with open('blank_device_config.json', 'r') as f:
      data = json.load(f)
    return data
 

def run_web_server(config_file_name):
    # We only need to call this function for windows
    # Based on my understanding this is based upon how windows and linux
    # differ in initiating threads.
    while(True):
       # print("I'm Running I swear....")
       # run()
       # await simulator.stop()
       asyncio.run(run(config_file_name))


def define_custom_config_values(config_file, NUM_OF_BITS, NUM_OF_UINT16, NUM_OF_UINT32, NUM_OF_FLOAT32, NUM_OF_STRINGS):
    # Some documentation notes:
    # Bits: Registers can be singulars (first entry) or arrays (second entry)
    # Uint16: Registers can be singulars (first entry) or arrays (second entry)
    # Uint32: Registers can only be arrays in multiples of 2
    # Float32: Registers can only be arrays in multiples of 2
    # Strings: Register 1 is a string of 2 chars, Register 2 is a string of 4 chars

    NUM_OF_REG = NUM_OF_BITS + NUM_OF_UINT16 + NUM_OF_UINT32 + NUM_OF_FLOAT32 + NUM_OF_STRINGS

    if NUM_OF_UINT32 % 2 != 0 and NUM_OF_FLOAT32 % 2 != 0:
        print("Incorrect increments of 2 for UINTS32 and FLOAT32")
        sys.exit(1)

    # This is a list of the total number of registers
    register_list = [x for x in range(1, NUM_OF_REG+1)]
    chunk_up_write_registers = [register_list[x:x+2] for x in range(0, len(register_list), 2)]
    # Set the number of writeable registers
    config_file["device_list"]["my device"]["write"] = chunk_up_write_registers
    
    # Chunk up registers into chunks of 2
    chunk_up_bit_registers = [register_list[0:NUM_OF_BITS][x:x+2] for x in range(0, len(register_list[0:NUM_OF_BITS]), 2)]
    # Set the registers for the bits
    config_file["device_list"]["my device"]["bits"] = chunk_up_bit_registers
    # Pop off our used number of registers for the bits
    register_list = list(set(register_list) - set(register_list[0:NUM_OF_BITS]))
    register_list.sort()
    
    chunk_up_uint16 = [register_list[0:NUM_OF_UINT16][x:x+2] for x in range(0, len(register_list[0:NUM_OF_UINT16]), 2)]
    # Set the registers for the uint16
    config_file["device_list"]["my device"]["uint16"] = chunk_up_uint16
    # Pop off our used registers for the uint16
    register_list = list(set(register_list) - set(register_list[0:NUM_OF_UINT16]))
    register_list.sort()
        
    # Chunk up registers into chunks of 2
    chunk_up_uint32_registers = [register_list[0:NUM_OF_UINT32][x:x+2] for x in range(0, len(register_list[0:NUM_OF_UINT32]), 2)]
    # Set the registers for the uint32
    config_file["device_list"]["my device"]["uint32"] = chunk_up_uint32_registers
    # Pop off our used registers for the uint32
    register_list = list(set(register_list) - set(register_list[0:NUM_OF_UINT32]))
    register_list.sort()
        
    # Chunk up registers into chunks of 2
    chunk_up_float32_registers = [register_list[0:NUM_OF_FLOAT32][x:x+2] for x in range(0, len(register_list[0:NUM_OF_FLOAT32]), 2)]
    # Set the registers for the float32
    config_file["device_list"]["my device"]["float32"] = chunk_up_float32_registers
    # Pop off our used registers for the float32
    register_list = list(set(register_list) - set(register_list[0:NUM_OF_FLOAT32]))
    register_list.sort()
    
    # Set the registers for the float32
    config_file["device_list"]["my device"]["string"] = [register_list[0:NUM_OF_STRINGS]]
    # Pop off our used registers for the float32
    register_list = list(set(register_list) - set(register_list[0:NUM_OF_STRINGS]))

    print(config_file)
    return config_file


if __name__ == "__main__":
    # Read in the default config file
    default_config = read_json_config_file()
    # Define the number of register types
    custom_config_file = define_custom_config_values(default_config, 2, 2, 2, 2, 2)
    file_name = write_json_config_file(custom_config_file)
    run_web_server(file_name)
    # asyncio.run(run())