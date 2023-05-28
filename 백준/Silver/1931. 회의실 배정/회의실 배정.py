import sys

stdin = sys.stdin.readline


N = int(stdin())

conf_list = []

for i in range(N):
    start, stop = map(int, stdin().split())
    conf_list.append((start, stop))

sort_end = sorted(conf_list, key= lambda x: (x[1], x[0]))

max_end = 0
conf_num = 0
for i in range(len(sort_end)):
    if sort_end[i][0] >= max_end and sort_end[i][1] >= max_end:
        max_end = sort_end[i][1]
        conf_num += 1


print(conf_num)



