#  Day 8 Problem No 17

# M. Replace MinMax => https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

n = int(input())
arr = list(map(int,input().split()))

fmin = min(arr)
fmax = max(arr)

min_indx = arr.index(fmin)
max_indx = arr.index(fmax)


tmp = arr[min_indx]
arr[min_indx] = arr[max_indx]
arr[max_indx] = tmp

print(*arr)