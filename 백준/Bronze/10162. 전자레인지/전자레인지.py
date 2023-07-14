import sys

stdin = sys.stdin.readline

A_time = 300
b_time = 60
c_time = 10

time = [A_time, b_time, c_time]

cook_time = int(input())

need_list = []

if cook_time % 10 != 0:
    print(-1)
else:
    
    for i in time:
        n = int(cook_time / i)
        cook_time = cook_time % i
        print(n, end=" ")
