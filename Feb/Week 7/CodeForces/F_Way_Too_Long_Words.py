# Week - 7 Day - 43 Problem - 83

# F. Way Too Long Words => https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

n = int(input())

while n >= 0:
    try:
        s = input().strip()
    except EOFError:
        break

    if len(s) <= 10:
        print(s)
    else:
        x = len(s) - 2
        f = s[0]
        l = s[-1]
        print(f"{f}{x}{l}")
    n-= 1
    