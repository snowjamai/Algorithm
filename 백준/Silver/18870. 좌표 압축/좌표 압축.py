import sys

N = int(input())

compress_arr = [0]*N
tmp_arr = [0]*N

arr = list(map(int, sys.stdin.readline().split()))

for i in range(len(arr)):
    tmp_arr[i] = (arr[i],i)

tmp_arr = sorted(tmp_arr, key= lambda x : x[0])


start_idx = 0
start_flag = 0
for i in tmp_arr:
    if start_flag == 0:
        compress_arr[i[1]] = start_idx
        prev_num = i[0]
        start_flag = 1
    else:
        if i[0] == prev_num:
            compress_arr[i[1]] = start_idx
        else:
            start_idx += 1
            compress_arr[i[1]] = start_idx
            prev_num = i[0]

for i in compress_arr:
    print(i, end=" ")
            
        
    