import sys
from collections import deque

N = int(sys.stdin.readline())
M = int(sys.stdin.readline())
S = sys.stdin.readline()

Pn = 'IOI' + 'OI' * (N - 1)
len_pn = len(Pn)

count = 0
for i in range(len(S) - len_pn):
    if S[i:i+len_pn] == Pn:
        count += 1

print(count)