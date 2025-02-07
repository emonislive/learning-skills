s = "hello, how are you"

print(s.find("how")) # search starts from 0
print(s.find("are", 0, 14))
print(s.rfind("you")) # search starts from len - 1
print(s.count("o")) # count the occurrence substring
