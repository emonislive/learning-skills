start = int(input("Enter Initial Number: "))
diff = int(input("Enter The Value: "))
terms = int(input("Enter The Number of Terms to Print: "))

print("The Values: ", end = " ")
for i in range(start, start + terms * diff, diff):
    print(i, end = " ")

