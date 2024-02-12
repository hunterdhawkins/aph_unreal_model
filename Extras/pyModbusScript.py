import asyncio
import json
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

def read_json_config_file():
    with open('custom_single_device.json', 'r') as f:
      data = json.load(f)
    return data
 
def create_custom_config_file():
   # Some documentation notes:
   # Bits: Registers can be singulars (first entry) or arrays (second entry)
   # Uint16: Registers can be singulars (first entry) or arrays (second entry)
   # Uint32: Registers can only be arrays in multiples of 2
   # Float32: Registers can only be arrays in multiples of 2
   # Strings: Register 1 is a string of 2 chars, Register 2 is a string of 4 chars, Register 3 is a string of 10 chars with the value ‘’A_B_C_D_E_’’.
   pass

def run_web_server():
    while(True):
       # print("I'm Running I swear....")
       # run()
       # await simulator.stop()
       asyncio.run(run())
   
if __name__ == "__main__":
    default_config = read_json_config_file()
    print(default_config)