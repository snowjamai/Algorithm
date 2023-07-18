import sys
from queue import PriorityQueue

pq = PriorityQueue()

N = int(input())
for i in range(N):
    num = int(input())
    pq.put(num)
        

total_num = 0

while pq.qsize() >= 2:
    num1 = pq.get()
    num2 = pq.get()
    sum_num = num1 + num2 
    total_num += sum_num
    pq.put(sum_num)
    
print(total_num)