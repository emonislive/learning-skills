number = int(input("Enter a Number: "))
temp = number
reverseNum = 0

while temp > 0:
    remainder = temp % 10
    temp //= 10
    reverseNum = reverseNum * 10 + remainder

if reverseNum == number:
    print("Number is Palindrome")
else:
    print("Number is not Palindrome")
