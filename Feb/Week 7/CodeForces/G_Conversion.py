# Week - 7 Day - 44 Problem - 84

s = input()
result = ''

for c in s:
    if c.islower():
        result += c.upper()
    elif c.isupper():
        result += c.lower()
    elif c == ',':
        result += ' '

print(result)