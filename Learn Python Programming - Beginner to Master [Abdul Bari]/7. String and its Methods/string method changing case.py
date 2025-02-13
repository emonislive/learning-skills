s = "Word"
s2 = s.upper() # uppercase
print(s2) # ans: WORD

s2 = s.lower() # lowercase
print(s2) # ans: word

s = "abcd ed f"
s2 = s.title() # uppercase all the first letter in words
print(s2) # ans: Abcd Ed F

s = "abcDEF"
s2 = s.swapcase() # swaps the upper to lower & lower to upper case
print(s2) # ans: ABCdef

s2 = s.casefold() # it is used if language is used that are not english
print(s2) # ans: abcdef

s = "ad is on"
s2 = s.capitalize() # uppercase the first character only
print(s2) # ans: Ad is on
