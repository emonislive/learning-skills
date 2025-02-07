s = "Emon     "
s2 = s.strip() # removes spaces from both left and right side
s.lstrip() # removes spaces from left side only
s.rstrip() # removes spaces from right side only

print(len(s))
print(len(s2))

s = "abc"
s2 = s.ljust(20, "+") # ans: abc+++++++++++++++++
print(s2)
s2 = s.rjust(10, "-") # ans: -------abc
print(s2)
s2 = s.center(15, "*") # ans: ******abc******
print(s2)
