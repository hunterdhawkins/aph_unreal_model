import requests

url = 'http://localhost:8000/api/registers / put'
myobj = {'register':3, 'value':7, "submit":"Set"}

'''
x = requests.post(url, json = myobj)

print(x.text)
'''
# http://localhost:8000/api/registers?register=3&value=5&submit=Set
# r = requests.put('https://httpbin.org / put', data ={'key':'value'})

r = requests.put(url, data = myobj)