import sys
N = int(sys.stdin.readline())
x = 2

while(N!=1):
    if(N%x != 0):
        x = x + 1
    elif(N%x == 0):
        N = N / x
        print(x)
        x = 2