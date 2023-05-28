import sys

stdin = sys.stdin.readline

N, K = map(int, stdin().split())

coin_list = []

for i in range(N):
    coin = int(input())
    coin_list.append(coin)

sort_coin = sorted(coin_list, reverse=True)
sum_v = 0

i = 0
for i in range(N):
    divide_num = K // sort_coin[i]
    if divide_num != 0:
        K = K - divide_num * sort_coin[i]
        sum_v += divide_num
    if K == 0:
        break
print(sum_v)

