import sys

stdin = sys.stdin.readline

S = stdin().strip()

s_dict = {}

for i in range(len(S)):
    for j in range(i, len(S)):

        tmp = S[i:j + 1]

        if s_dict.get(tmp) == None:
            s_dict[tmp] = 1
        
        
print(len(s_dict))
        
        