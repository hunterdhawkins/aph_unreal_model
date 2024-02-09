from pymodbus.server import ModbusSimulatorServer

async def run():
   simulator = ModbusSimulatorServer(
      modbus_sever = "my server",
      modbus_device = "my device",
      http_host = "localhost",
      http_port =  8080,
      json_file = "customSetup.json")

   await simulator.run_forever(only_start=True)

   await simulator.stop()
