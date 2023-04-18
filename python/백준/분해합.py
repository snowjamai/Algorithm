N = int(input())

find_flag = 0

for i in range(N):
    tmp = i
    sum_v = i
    while tmp:
        sum_v += tmp % 10
        tmp = tmp // 10
    if sum_v == N:
        find_flag = i
        break
        
if find_flag != 0:
    print(find_flag)
else:
    print(0)