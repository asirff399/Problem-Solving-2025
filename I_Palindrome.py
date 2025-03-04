# Week - 9 Day - 63 Problem - 85
s = input()
l = 0;
r = len(s) - 1

flag = True
while l < r:
    if s[l] != s[r]:
        flag = False
        break
    l+=1
    r-=1

if flag:
    print("YES")
else:
    print("NO")