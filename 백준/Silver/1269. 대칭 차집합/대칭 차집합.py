import sys

stdin = sys.stdin.readline

N, M = map(int, stdin().split())

A = set(map(int,stdin().split()))
B = set(map(int,stdin().split()))

sub_A = A - B
sub_B = B - A

print(len(sub_A) + len(sub_B))