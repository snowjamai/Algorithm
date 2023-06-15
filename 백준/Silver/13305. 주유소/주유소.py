import sys

stdin = sys.stdin.readline 

N = int(stdin())
city_len = list(map(int, stdin().split()))
cost = list(map(int, stdin().split()))

cost_dict = {}
for i in range(len(city_len)):
    cost_dict[i] = city_len[i]

cost_idx = {}
for idx, val in enumerate(city_len):
    cost_idx[idx] =val
    

dp = []
dp.append(cost[0])

for i in range(1, len(cost)):
    if cost[i] < dp[i - 1]:
        dp.append(cost[i])
    else:
        dp.append(dp[i - 1])

total_cost = 0
for i in range(len(dp) - 1):
    total_cost += dp[i] * city_len[i]
    
print(total_cost)
    
    
    
    
# print(dp)
    
    
    
    
    
    