n = int(input())
m = list(map(int, input().split()))
min1 = 10**8
for i in m:
    if i < min1:
        min1 = i
m.remove(min1)
min2 = 10**8
for i in m:
    if i < min2:
        min2 = i
print(min1, min2)