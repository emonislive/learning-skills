n = int(input("Enter a number: "))
# same as switch case in C++
match n:
    case 1:
        print("One")
    case 2:
        print("Two")
    case 3:
        print("Three")
    case _:
        print("Number not recognized")
