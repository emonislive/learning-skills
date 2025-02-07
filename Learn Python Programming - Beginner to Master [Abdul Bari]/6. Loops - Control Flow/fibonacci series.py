number = int(input("Enter The Number of Terms: "))
first, second = 0, 1

print("The Fibonacci Series: ", end = " ")
for i in range(number):
    print(first, end = " ")
    third = first + second
    first = second
    second = third
