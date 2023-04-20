import sys
N = int(sys.stdin.readline())

arr = []
for i in range(N):
    num = int(sys.stdin.readline())
    
    arr.append(num)
    
sort_arr = sorted(arr)

for i in sort_arr:
    print(i)