import sys

stdin = sys.stdin.readline

changes = [500, 100, 50, 10, 5, 1]

N = int(stdin())
N = 1000 - N
cnt = 0

for i in changes:
    div = N // i
    if div != 0:
        N = N % i
        cnt += div


print(cnt)



