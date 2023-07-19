N = int(input())

def is_han(num):
    if num < 10:
        return True
    num_str = str(num)
    
    num_diff = int(num_str[0]) - int(num_str[1])
    
    for i in range(1, len(num_str) - 1):
        if int(num_str[i]) - int(num_str[i+1]) != num_diff:
            return False 
    
    return True
        
    
        
        
    
cnt = 0
for i in range(1, N + 1):
    if is_han(i):
        cnt+= 1
        
        
print(cnt)
        
    
    
    
    