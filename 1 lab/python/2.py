n = int(input())
m = list(map(int, input().split()))
m_dist = []
x = int(input())
temp = 10**8
res = 0
for i in m:
    if abs(x - i) < temp:
        temp = abs(x - i)
        res = i
print(res)