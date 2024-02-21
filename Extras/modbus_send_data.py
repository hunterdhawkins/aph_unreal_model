import requests

headers = {"Content-Type": "application/json; charset=utf-8"}

url = 'http://localhost:8081/api/registers'

myobj = {
    "register": 4,
    "value": 15,
    "submit": "Set"
}


r = requests.get(url, params=myobj)





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