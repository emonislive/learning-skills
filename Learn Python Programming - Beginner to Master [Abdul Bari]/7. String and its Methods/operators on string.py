# concatenation

a, b = "Hello", "World"
c = a + b
print(c)

# convert to string str(x)
a = int(10)
print(type(a))
b = str(a)
print(type(b))


# Repetition printing
a = "hi"
b = a * 5
print(b)

# indexing
a = "ABCDE"
print(a[0])
print(a[-5])

# slicing string  s[start : end : step]
s = "Hello World"
s2 = s[0 : 4 : 1]
rev_s = s[-1 : -len(s) - 1 : -1] # reverse a string
print(s2) # ans: Hell
print(rev_s) # ans: dlroW olleH


# check substring in a string
s = "I am emon"

if "emon" in s:
    print("TRUE")

if "amm" not in s:
    print("TRUE")
