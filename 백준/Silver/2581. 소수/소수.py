import sys
M = int(sys.stdin.readline())
N = int(sys.stdin.readline())
sosu = []
for i in range(M,N+1):
    if(i != 1):
        exist = 0
        for j in range(2,i):
            if(i%j == 0):
                exist = exist + 1
            
        if(exist == 0):
            sosu.append(i)
if len(sosu) == 0:
    print(-1)
else:
    sum = 0
    for i in sosu:
        sum = sum + i
    print(sum)
    print(min(sosu))