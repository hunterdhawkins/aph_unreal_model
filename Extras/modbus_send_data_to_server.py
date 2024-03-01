import requests

url = 'http://localhost:8081/api/registers'


def test_sending_data_to_webserver():
    myobj = {
        "register": 1,
        "value": 0,
        "submit": "Set"
    }

    r = requests.get(url, params=myobj)
    print(r.text)


def write_data_to_webserver(data_json_object):
    r = requests.get(url, params=data_json_object)


def main():
    test_sending_data_to_webserver()
    

if __name__ == "__main__":
    main()
