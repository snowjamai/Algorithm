import sys

stdin = sys.stdin

N = int(input())

card = [0] * (20000002)

arr = list(map(int, stdin.readline().split()))

for i in arr:
    card[i + 10000000] = 1
    
M = int(stdin.readline())

check_arr = list(map(int,stdin.readline().split()))

for i in check_arr:
    if card[i + 10000000] == 1:
        print(1,end=" ")
    else:
        print(0,end=" ")
