import sys

stdin = sys.stdin.readline

N = int(stdin())

A = map(int, stdin().split())
B = map(int, stdin().split())

sort_b = sorted(B)
sort_a = sorted(A,reverse=True)

re = 0
for i in range(N):
    re += sort_a[i] * sort_b[i]

print(re)
