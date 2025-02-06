a = int(2000)
b = int(27)

# ? a = a ? b , a ?= b [? = operator]
a += b # add
print(a)

a -= b # sub
print(a)

a /= b # div
print(a)

a = int(a) # converting to int before modulus
a %= b
print(a)

a //= b
print(int(a)) # converting to int because floor value is always int type

a **= b
print(a)
