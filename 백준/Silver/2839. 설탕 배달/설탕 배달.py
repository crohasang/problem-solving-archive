import sys
N = int(sys.stdin.readline())
a = 5
b = 3

a_count = int(N/a)
b_count = 0

if(N%a == 0):
    print(a_count)
else:
    while(True):
        N = N - b
        b_count = b_count + 1
        if(N%a == 0):
            a_count = int(N/a)
            print(a_count + b_count)
            break
        if(N == 0):
            print(b_count)
            break
        elif(N < 0):
            print(-1)
            break
