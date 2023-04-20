import sys
N = int(sys.stdin.readline())

num = {}

for i in range(N):
    k = int(sys.stdin.readline())
    if num.get(k) == None:
        num[k] = 1
    else:
        num[k] += 1
        
sort_arr = sorted(num.keys())

for i in sort_arr:
    cnt = num[i]
    for j in range(cnt):
        print(i)