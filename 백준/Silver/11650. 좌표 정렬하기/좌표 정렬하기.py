N = int(input())

arr = []
for i in range(N):
    x, y = map(int, input().split())
    arr.append((x,y))
    
sort_arr = sorted(arr,key=lambda x: (x[0],x[1]))

for i in sort_arr:
    print(i[0], i[1])
    