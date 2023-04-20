N, k = map(int, input().split())

arr = list(map(int, input().split()))

sort_arr = sorted(arr, key=lambda x : -x)

print(sort_arr[k - 1])