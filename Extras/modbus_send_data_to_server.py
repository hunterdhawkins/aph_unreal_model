import requests

url = 'http://localhost:8081/api/registers'


def test_sending_data_to_webserver():
    myobj = {
        "register": 4,
        "value": 22,
        "submit": "Set"
    }

    r = requests.get(url, params=myobj)


def write_data_to_webserver(data_json_object):
    r = requests.get(url, params=data_json_object)


def main():
    test_sending_data_to_webserver()
    

if __name__ == "__main__":
    main()
    

'''
print(requests.post(url, headers=headers, json = myobj))
x = requests.post(url, headers=headers, json = myobj)
print(x.text)

# print(requests.post(url, json = myobj))

# x = requests.post(url, json = myobj)

# print(x.text)


x = requests.post(url, json = myobj)

print(x.text)

# http://localhost:8000/api/registers?register=3&value=5&submit=Set
# r = requests.put('https://httpbin.org / put', data ={'key':'value'})

r = requests.put(url, data = myobj)
'''