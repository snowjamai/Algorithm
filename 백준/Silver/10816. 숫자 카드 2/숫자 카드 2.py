import sys
from collections import Counter

stdin = sys.stdin.readline

N = int(stdin())

have_arr = list(map(int,stdin().split()))
car_num_dict = dict(Counter(have_arr))

M = int(stdin())

check_arr = list(map(int,stdin().split()))

for i in check_arr:
    if car_num_dict.get(i) == None:
        print(0,end=" ")
    else:
        print(car_num_dict[i],end=" ")