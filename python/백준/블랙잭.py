
import sys

INT_MAX = sys.maxsize

q = []
total = []
tmp = []
N, sum_v = map(int, input().split())
arr = list(map(int, input().split()))

def dfs(idx):
    
    global q, total
    if len(q) == 3:
        tmp.append(q.copy())
        total.append(sum(q))
        return
    if idx == N:
        return
    
    q.append(arr[idx])
    dfs(idx + 1)
    q.pop()
    dfs(idx + 1)
        
dfs(0)

sub_min = INT_MAX
sub_i = 0

for i in total:
    if i <= sum_v:
        if sum_v - i <= sub_min:
            sub_min = sum_v - i
            sub_i = i
            
print(sub_i)
        