N = int(input())

large = 5
small = 3

large_num = N // large

small_num = -1
for i in range(large_num, -1, -1):
    remain = N - large * i
    if remain == 0:
        small_num = 0
        break
    elif remain % small == 0:
        small_num = remain / small
        break

print(int(i + small_num))