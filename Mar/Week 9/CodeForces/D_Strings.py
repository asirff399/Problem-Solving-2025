# Week - 9 Day - 63 Problem - 86

s1 = input()
s2 = input()

l1 = len(s1)
l2 = len(s2)

con_s = s1+s2

new1 = s2[0] + s1[1:] 
new2 = s1[0] + s2[1:] 

print(l1,l2)
print(con_s)
print(new1,new2)