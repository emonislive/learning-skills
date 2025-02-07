import math as m
number = int(input("Enter The Number: "))

if number < 2:
    print("Not a Prime")
else:
    for i in range(2, int(m.sqrt(number)) + 1):
        if number % i == 0:
            print("Not a Prime")
            break
    else:
        print("Is a Prime Number")


