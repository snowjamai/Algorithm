import sys

N = int(sys.stdin.readline())

arr = [0]*N
for i in range(N):
    age, name = map(str, sys.stdin.readline().split())
    age = int(age)
    
    arr[i] = (age,name,i)
    
sort_arr = sorted(arr,key=lambda x: (x[0],x[2]))

for i in sort_arr:
    print(i[0], i[1])
    