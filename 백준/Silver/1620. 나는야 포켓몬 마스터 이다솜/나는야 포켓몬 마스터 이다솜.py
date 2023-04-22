import sys

stdin = sys.stdin.readline 

N, M = map(int, stdin().split())

arr = [0] * (N + 1)
pocket = {}

for i in range(N):
    name = stdin().strip()
    arr[i + 1] = name
    pocket[name] = i + 1

for i in range(M):
    question = stdin().strip()
    
    if question.isdigit() == True:
        print(arr[int(question)])
    else:
        print(pocket[question])
    