import sys 
stdin = sys.stdin.readline 

N = input()

is_zero = False 

if '0' in N:
    is_zero = True
else:
    is_zero = False

if is_zero == False: 
    print(-1)
else: 
    num = 0
    for i in N:
        num += int(i)
        
    if num % 3 == 0:
        sorted_num = sorted(N, reverse=True) 
        sort_num = ''.join(sorted_num)
        print(int(sort_num))
    else:
        print(-1)    