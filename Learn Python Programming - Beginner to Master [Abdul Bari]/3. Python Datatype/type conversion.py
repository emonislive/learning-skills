# int 
x = 10
print(x)

# int to float
y = float(x)
print(y)

# int to bool
y = bool(x)
print(y)

# int to str
z = str(x)
print(type(z))
print(z)

# str(bin) to int
a = '0b1010'
b = int(a, 2) # for oct: (x,8), hex: (x, 16)
print(b)

# int/float to complex
a = 10.3
b = complex(a)
print(b)

# ! int     can't convert complex 
# ! float   can't convert to complex
# ! complex can convert every type
# ! bool    can convert every type
# ! str     can convert every type
