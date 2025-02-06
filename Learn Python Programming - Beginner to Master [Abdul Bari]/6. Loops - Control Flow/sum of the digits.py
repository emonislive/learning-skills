number = int(input("Enter a number: "))
temp = number
sumOfDigit, c = 0, 0

while temp > 0:
    remainder = temp % 10
    temp //= 10
    sumOfDigit += remainder
    c += 1

print("Sum of the Digit [", number, "]:", sumOfDigit)
print("The Length of the Number:", c)
