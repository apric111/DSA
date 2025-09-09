n = int(input())
m = list(map(int, input().split()))
count = 0

for i in range(1, n - 1):
    if m[i - 1] < m[i] > m[i + 1]:
        count += 1

print(count)
