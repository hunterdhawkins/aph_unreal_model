def handle_control_method():
	pass


def read_json_file(filename):
    with open(filename, 'r') as f:
      data = json.load(f)
    return data
