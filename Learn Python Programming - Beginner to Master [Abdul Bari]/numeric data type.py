
# * int/ long long int
x = 10

# * float/ double
x = 10.3

x = 3e8 # ? 3 x 10^8
print(x)

# * boolean
x = True
y = False

print(type(x))

# * complex (real [a] + imaginary [bj], (a + bj) )
x = 3 + 5j # ? real : 3, imaginary: 5

print(type(x))

print(x.real) # * printing the real part
print(x.imag) # * printing the imaginary part

# ! There is no size like c++ have , for ex: in c++ int = 4 byte but python can take as much size as it can
# ! Thats why it supports big number but c++ can't after 10^18
