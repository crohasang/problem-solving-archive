import sys
T = int(sys.stdin.readline())

for i in range(T):
    H,W,N = map(int, sys.stdin.readline().split())
    if(N%H == 0):
        floor = H
        num = int(N/H) 
    else:
        floor = int(N%H)
        num = int(N/H) + 1

    x = floor * 100 + num
    print(x)
