import sys

N = int(input())

company = {}


for i in range(N):
    name, cmd = map(str, sys.stdin.readline().split())
    
    if cmd == "enter":
        company[name] = 'enter'
    elif cmd == 'leave':
        if company.get(name) == None:
            continue
        else:
            company.pop(name)

sort_arr = sorted(company.keys())

for i in range(len(sort_arr)-1, -1,-1):
    print(sort_arr[i])
    
    
    