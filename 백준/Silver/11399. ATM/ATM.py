import sys

stdin = sys.stdin.readline

N = int(stdin())

p_arr = list(map(int, stdin().split()))
new_p = []

for i, val in enumerate(p_arr):
    new_p.append((val, i))


sort_p = sorted(new_p, key=lambda x : x[0])

sum_v = 0
for i in range(len(sort_p)):
    val, idx = sort_p[i][0], sort_p[i][1]

    sum_v += (N - (i )) * val

print(sum_v)