import json 


def handle_control_method():
	pass


def read_json_file(filename):
    with open(filename, 'r') as f:
      data = json.load(f)
    return data


def write_json_file(filename, data):
  with open(filename, 'w') as f:
    json.dump(data, f)

