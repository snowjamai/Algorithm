N = int(input())

str_dict = {}
str_arr = []
for i in range(N):
    st = input()
    if str_dict.get(st) == None:
        str_dict[st] = 1
        str_arr.append(st)

    
sort_arr = sorted(str_arr, key=lambda x: (len(x), x))

for i in sort_arr:
    print(i)