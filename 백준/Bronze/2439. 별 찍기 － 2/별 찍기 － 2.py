import sys
T = int(sys.stdin.readline())

for i in range(1,T+1):
    for j in range(1,T+1):
        if(j < T-i+1):
            print(" ", end='')
        else:
            print("*", end='')
    print("")