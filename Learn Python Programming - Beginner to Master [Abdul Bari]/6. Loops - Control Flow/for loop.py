msg = "HELLO"

for i in msg: # this act like this in C++ --> for (auto i : msg)
    print(i, end="  ")

print()

msg = "123456"   

for i in range(0, len(msg), 2): # using range like we use this in C++ --> for (i = 0; i < len(msg); i += 2)
    print(msg[i], end = " ")
