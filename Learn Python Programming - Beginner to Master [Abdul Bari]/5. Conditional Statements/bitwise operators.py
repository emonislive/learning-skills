# ! format() function to check the format(ex. bin, oct, hexa) of a value
a = 10
print(format(a, 'b')) # ? convert decimal or char to desirable format

# ? 'b' = binary
# ? 'o' = octal
# ? '0x' = hexa-decimal



# ! AND operator (&)

# Truth table for AND:
# | A   | B   | A & B |
# |-----|-----|-------|
# | 0   | 0   | 0     |
# | 0   | 1   | 0     |
# | 1   | 0   | 0     |
# | 1   | 1   | 1     |

a = 11                          # 1 0 1 1 (11)
b = 21                          # 1 0 1 0 1 (21)
print("AND (a & b):", a & b)    # 0 0 0 0 1 (ans = 1)

# ! OR operator (|)

# Truth table for OR:
# | A   | B   | A | B |
# |-----|-----|-------|
# | 0   | 0   | 0     |
# | 0   | 1   | 1     |
# | 1   | 0   | 1     |
# | 1   | 1   | 1     |

a = 11                          # 1 0 1 1 (11)
b = 21                          # 1 0 1 0 1 (21)
print("OR (a | b):", a | b)     # 1 0 1 1 1 (ans = 31)

# ! XOR operator (^)

# Truth table for XOR:
# | A   | B   | A ^ B |
# |-----|-----|-------|
# | 0   | 0   | 0     |
# | 0   | 1   | 1     |
# | 1   | 0   | 1     |
# | 1   | 1   | 0     |

a = 11                          # 1 0 1 1 (11)
b = 21                          # 1 0 1 0 1 (21)
print("XOR (a ^ b):", a ^ b)    # 0 0 0 1 0 (ans = 30)

# ! NOT operator (~)

# Truth table for NOT:
# | A   | ~A   |
# |-----|------|
# | 0   | -1   |
# | 1   | -2   |

a = 11                          # 1 0 1 1 (11)
print("NOT (~a):", ~a)          # 0 1 0 0 (ans = -12) [two's complement]

# ! Shift (<< >>)

# ? left shift <<
a = 10
a <<= 1 # * it doubles the value every left shift
print("Left shift (<<): ", a)

# ? right shift <<
a = 10
a >>= 1 # * it half's the value every right shift
print("Right shift (>>): ", a)
