year = int(input("Enter a year: "))

if year % 100 == 0:
    if year % 400 == 0:
        print("LEAP YEAR.")
    else:
        print("NOT A LEAP YEAR.")
elif year % 4 == 0:
    print("LEAP YEAR.")
else:
    print("NOT A LEAP YEAR.")
