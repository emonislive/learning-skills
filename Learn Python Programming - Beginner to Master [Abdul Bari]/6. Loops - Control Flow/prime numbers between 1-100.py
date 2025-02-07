import math as m

for number in range(1, 101):
    if number < 2:
        continue  

    isPrime = True  # Assume number is prime
    for i in range(2, int(m.sqrt(number)) + 1):
        if number % i == 0:
            isPrime = False  # Found a factor, not prime
            break

    if isPrime:
        print(number, end=" ") 
