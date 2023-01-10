import sys
N = int(sys.stdin.readline())
li = list(map(int, sys.stdin.readline().split()))
max = li[0]
min = li[0]
for i in range(0,N):
    if(li[i] > max):
        max = li[i]
    elif(li[i] < min):
        min = li[i]
print(min, end=' ')
print(max)