N = int(input())

cnt = 0
num = 665

while True:
    num += 1
    
    tmp = num
    is_end_num = 0
    tmp_cnt = 1
    prev_div = -1
    while tmp:
        div = tmp % 10
        if prev_div == -1:
            prev_div = div
        else:            
            
            if prev_div == 6 and div == 6: 
                tmp_cnt += 1
            else:
                tmp_cnt = 1

            prev_div = div
        if tmp_cnt >= 3:
            is_end_num = num
            break
            
        
        tmp = tmp // 10
        
        
    if is_end_num != 0:
        cnt += 1
    
    if cnt == N:
        break
    
print(num)