N = int(input())

arr = []

while N:
    div = N % 10
    arr.append(div)
    N = N // 10
    
sort_arr = sorted(arr, key=lambda x: -x)

for i in sort_arr:
    print(i,end="")