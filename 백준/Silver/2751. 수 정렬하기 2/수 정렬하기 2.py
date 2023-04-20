import sys

N = int(sys.stdin.readline())

arr = [0]*N
for i in range(N):
    num = int(sys.stdin.readline())
    arr[i] = num

    
sort_arr = sorted(arr)

for i in sort_arr:
    print(i)