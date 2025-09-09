n = int(input())
m = list(map(int, input().split()))
last = m[-1]
for i in range(n - 2, -1, -1):
    m[i + 1] = m[i]
    m[i] = 0
m[0] = last
print(*m)