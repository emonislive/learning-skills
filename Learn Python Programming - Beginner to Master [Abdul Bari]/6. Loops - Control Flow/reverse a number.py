number = int(input("Enter a Number: "))

print("Reversed Number: ", end="")

while number > 0:
    r = number % 10
    number //= 10
    print(r, end="")

