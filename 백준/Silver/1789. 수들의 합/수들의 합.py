import sys


S = int(input())
if S == 1:
    print("1")
else:
    for i in range(S):
        sum_i = (i)*(i+1)/2
        if sum_i <= S and(sum_i + i+1) > S:
            num_i = i
            break
    print(num_i)