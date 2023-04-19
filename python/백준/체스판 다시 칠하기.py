N, M = map(int, input().split())

grid = [list(input())
        for _ in range(N)
        ]

def check(i, j):
    first = grid[i][j]
    start = (i + j) % 2
    
    if first == 'B':
        other = 'W'
    else:
        other = 'B'
    cnt_f = 0
    cnt_s = 0
   
    for h in range(i, i + 8):
        for w in range(j, j + 8):
            if start == (h + w) % 2 :
                if grid[h][w] != first:
                    cnt_f += 1        
                if grid[h][w] != other:
                    cnt_s += 1
            else:
                if grid[h][w] != other  :
                    cnt_f += 1
                if grid[h][w] != first:
                    cnt_s += 1
                    
  
    if cnt_s <= cnt_f:
        return cnt_s
    else:
        return cnt_f

import sys
INT_MAX = sys.maxsize
min_cnt = INT_MAX
for H in range(N - 7):
    for W in range(M - 7):
  
        cnt = check(H, W)
        # print(h, w, cnt)
        if min_cnt > cnt:
            min_cnt = cnt

        
        
print(min_cnt)
    
                    