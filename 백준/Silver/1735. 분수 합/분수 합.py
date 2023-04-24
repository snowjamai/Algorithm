import sys

stdin = sys.stdin.readline

A_son, A_mom = map(int, stdin().split())
B_son, B_mom = map(int, stdin().split())

def GCD(a,b):
    if b == 0:
        return a
    return GCD(b, a%b)

gcd_num = GCD(A_mom,B_mom)

re_mom = int(A_mom * B_mom / gcd_num)
re_son = int(A_son * (re_mom / A_mom) + B_son * (re_mom / B_mom))

can_div = GCD(re_son, re_mom)

print(int(re_son/ can_div), int(re_mom/can_div))
