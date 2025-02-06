"""
! is , is not checks if a value that is same is stored in the same address in the memory or not
! if true then says true or else false
"""
# ? EXAMPLE 1
a = 10
b = 10
print(id(a))
print(id(b))

print(a is b)

# ? EXAMPLE 2
a = input() # when only input used python create new object for each value regardless if the value same or not
b = input()
print(id(a))
print(id(b))

print(a is b) # ans : False

# ? EXAMPLE 3
a = int(input()) # but when type cast the value then it stores the value in the same address if the value has duplicates
b = int(input())
print(id(a))
print(id(b))

print(a is b) # ans : True
print(a is not b) # ans: False
