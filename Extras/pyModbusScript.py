import asyncio

from pymodbus.server import ModbusSimulatorServer

async def run():
   simulator = ModbusSimulatorServer(
      modbus_server = "server",
      modbus_device = "my device",
      http_host = "localhost",
      http_port =  8081,
      json_file = "customSetup.json")

   await simulator.run_forever()

while(True):
   # print("I'm Running I swear....")
   # run()
   # await simulator.stop()
   asyncio.run(run())