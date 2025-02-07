# METHOD 1
import math as m

number = int(input("Enter The Number: "))
print("Factorial of", number, "is:", m.factorial(number))



# METHOD 2
number = int(input("Enter The Number: "))
fact = 1
for i in range(1, number + 1):
    fact *= i 

print("Factorial of", number, "is:", fact)
