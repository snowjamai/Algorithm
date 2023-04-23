import sys

stdin = sys.stdin.readline

T = int(stdin())

def GCD(a,b):
    if b == 0:
        return a
    return GCD(b, a % b)
for i in range(T):
    A, B = map(int, stdin().split())
    
    print( int(A * B / GCD(A,B)))