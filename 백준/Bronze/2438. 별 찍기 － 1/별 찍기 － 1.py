import sys
T = int(sys.stdin.readline())

for i in range(1,T+1):
    for j in range(1,i+1):
        if(j<i):
            print("*", end='')
        elif(j == i):
            print("*")