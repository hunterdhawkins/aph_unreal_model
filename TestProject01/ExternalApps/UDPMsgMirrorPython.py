## Adapted from:
## https://nshel.github.io/programming/python/udp_client_server.html
## 

import socket

# Define the host IP and port number:
host = "127.0.0.1"
port = 8000
toaddress = ( host, 8001 )

# Define default message string:
message = "Undefined."
# Define size of receive buffer:
buffer_size = 1024

# Create the UDP listener socket:
print("UDP Mirror: Creating UDP socket ...")
server = socket.socket( socket.AF_INET, socket.SOCK_DGRAM )
print("UDP Mirror: UDP socket created successfully.")

try:
    print("UDP Mirror: Binding socket to localhost and port ...")
    server.bind( ( host, port ) )
    print("UDP Mirror: Socket bind complete.")    
except socket.error as error:
    print("UDP Mirror: Socket bind failed: ")
    print("UDP Mirror: -- Error: ")
    print( str(error) )
    exit()

# Repeat 100 times:
for i in range(100):
    # Receive message from client:
    data = server.recvfrom( buffer_size )
    message = data[0].decode()
    fromaddress = data[1]
    print(f"UDP Mirror: Message received: {message}" )
    print(f"UDP Mirror: -- from {fromaddress[0]}:{fromaddress[1]}" )
    # Mirror the message back to the socket that sent it:
    server.sendto( message.encode(), toaddress )

# Close the socket:
print("UDP Mirror: Done: Closing socket. ")
server.close()