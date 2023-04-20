
arr = []
for i in range(5):
    num = int(input())
    arr.append(num)

sum_v = sum(arr)
sort_arr = sorted(arr,key= lambda x : -x)

print(int(sum_v / 5.))
print(sort_arr[2])