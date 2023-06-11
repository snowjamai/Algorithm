import sys

stdin = sys.stdin.readline

N = int(stdin())

lope_list = []
for i in range(N):
    w = int(stdin())
    lope_list.append(w)


sort_lope = sorted(lope_list,reverse=True)

max_w = -float("inf")

for i in range(N):
    idx = i + 1

    small_w = sort_lope[i]
    w = small_w * idx

    if w > max_w:
        max_w = w
print(max_w)
