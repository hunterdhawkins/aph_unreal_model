import asyncio
import json
import pprint
import sys
from pymodbus.server import ModbusSimulatorServer

# PyModBus Documentation: https://pymodbus.readthedocs.io/en/latest/source/library/simulator/config.html

async def run():
   simulator = ModbusSimulatorServer(
      modbus_server = "server",
      modbus_device = "my device",
      http_host = "localhost",
      http_port =  8081,
      json_file = "custom_single_device.json")

   await simulator.run_forever()


def write_json_config_file(json_config_dict):
    with open('custom_config.json', 'w') as json_file:
      json.dump(json_config_dict, json_file)
      
 
def read_json_config_file():
    with open('blank_device_config.json', 'r') as f:
      data = json.load(f)
    return data
 

def run_web_server():
    # We only need to call this function for windows
    # Based on my understanding this is based upon how windows and linux
    # differ in initiating threads.
    while(True):
       # print("I'm Running I swear....")
       # run()
       # await simulator.stop()
       asyncio.run(run())


def define_custom_config_values(config_file, NUM_OF_BITS, NUM_OF_UINT16, NUM_OF_UINT32, NUM_OF_FLOAT32, NUM_OF_STRINGS, NUM_OF_REG=10):
    # Some documentation notes:
    # Bits: Registers can be singulars (first entry) or arrays (second entry)
    # Uint16: Registers can be singulars (first entry) or arrays (second entry)
    # Uint32: Registers can only be arrays in multiples of 2
    # Float32: Registers can only be arrays in multiples of 2
    # Strings: Register 1 is a string of 2 chars, Register 2 is a string of 4 chars

    if NUM_OF_REG != (NUM_OF_BITS + NUM_OF_UINT16 + NUM_OF_UINT32 + NUM_OF_FLOAT32 + NUM_OF_STRINGS):
        print("Incorrect config settings, check number of registers")
        sys.exit(1)

    if NUM_OF_UINT32 % 2 != 0 and NUM_OF_FLOAT32 % 2 != 0:
        print("Incorrect increments of 2 for UINTS32 and FLOAT32")
        sys.exit(1)

    register_list = [x for x in range(1, NUM_OF_REG+1)]
    # Set the number of writeable registers
    config_file["device_list"]["my device"]["write"] = [register_list]

    print(config_file)
    

if __name__ == "__main__":
    # Read in the default config file
    default_config = read_json_config_file()
    # Define the number of register types
    define_custom_config_values(default_config, 2, 2, 2, 2, 2)
    # run_web_server()
    # asyncio.run(run())