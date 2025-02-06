import random as rd

userInput = int(input("Enter a Number [1-10]: "))

guess = rd.randint(1,10)

if guess == userInput:
    print("You guessed the right number")
else:
    print("Sorry you missed! Try again.\nThe number was:", guess)
