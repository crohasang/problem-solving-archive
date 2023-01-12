import sys
T =(int)(sys.stdin.readline().strip())
for i in range(T):
    R, S = sys.stdin.readline().strip().split()
    R = int(R)
    for j in range(len(S)):
        print(S[j]*R, end = '')
    print()