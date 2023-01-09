import sys
N = int(sys.stdin.readline())
n = N
count = 0
while(True):
    count = count + 1
    x = int(N/10) + (N%10)
    if (x >= 10):
        x = x % 10
    N = 10*(N%10) + x
    if (N == n):
        break
print(count)