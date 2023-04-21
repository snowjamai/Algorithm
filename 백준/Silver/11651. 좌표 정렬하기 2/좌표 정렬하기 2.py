N = int(input())

arr = []
for i in range(N):
    x, y = map(int, input().split())
    arr.append((x,y))
    
sort_arr = sorted(arr,key=lambda x: (x[1],x[0]))

for i in sort_arr:
    print(i[0], i[1])
    