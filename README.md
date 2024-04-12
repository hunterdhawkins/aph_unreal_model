# Aquifer Pumped Hydro Digital Twin - Version 1.0
## General Description
This is the first steps in building a digital twin to model Aquifer Pumped Hydro. There are currently many problems to still be solved even after working through many bugs. 

## Built With
  - The Django Web Framework
    - [Documentation](https://www.djangoproject.com/)  
  - Boostrap 5
    - [Template](https://startbootstrap.com/template/sb-admin)
    - [Documentation](https://getbootstrap.com/docs/5.3/getting-started/introduction/)
  - PyModbus
    - [Documentation](https://pymodbus.readthedocs.io/en/latest/)
  - Unreal Engine 5
    - [Documentation](https://dev.epicgames.com/documentation/en-us/unreal-engine/unreal-engine-5-3-documentation)
  - Paho-MQTT W/ Mosquitto Broker
    -  [Paho Documentation](https://eclipse.dev/paho/files/paho.mqtt.python/html/client.html)
    -  [Mosquitto Documentation(https://mosquitto.org/documentation/)

## Install and Setup
- Clone repository
- pip install -r requirements.txt
- Run py manage.py migrate

## Running The Code
- PyModbus Webserver
  - py modbus_server_dynamic_config
- Django Webserver
  - Run py manage.py runserver

## TODOS
- Figure out git ignore issues
- Change MQTT topics from real time to replay when user desires
- Convert from SQLite to Postgresql
- Enhanced visuals
- Real time graphing from cache file

## Authors
Hunter Hawkins - hawk5052@vandals.uidaho.edu
Dan Blanchette - blan5568@vandals.uidaho.edu

## License
This project is licensed under the [MIT License](LICENSE.md), which means it is free for anyone to use, modify, and distribute.
