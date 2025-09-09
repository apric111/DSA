def multi(A, B):
    C = []
    for i in range(len(A)):
        C.append(A[i] * B[i])
    return sum(C)

def roll(A, n, m):
    res = []
    for j in range(m):
        temp = []
        for i in range(n):
            temp.append(A[i][j])
        res.append(temp)
    return res

n, m, k = map(int, input().split())
A = []
B = []
C = []
for i in range(n):
    A.append(list(map(int, input().split())))
for i in range(m):
    B.append(list(map(int, input().split())))

B = roll(B, m, k)

for a in range(n):
    temp = []
    for b in range(k):
        temp.append(multi(A[a], B[b]))
    C.append(temp)

for i in C:
    print(*i)