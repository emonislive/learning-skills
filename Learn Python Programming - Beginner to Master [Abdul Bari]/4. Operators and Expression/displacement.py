# ! displacement

u = float(input("Enter Initial Velocity: "))
v = float(input("Enter Final Velocity: "))
a = float(input("Enter the area: "))

displacement = (v ** 2 - u ** 2) / (2 * a)

print("Displacement: ", displacement)
