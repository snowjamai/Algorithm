import sys

stdin = sys.stdin

N, M = map(int, stdin.readline().split())

s_dict = {}

for i in range(N):
    s_dict[stdin.readline()] = 1

cnt = 0
for i in range(M):
    if s_dict.get(stdin.readline()) != None:
        cnt += 1
        
print(cnt)
    