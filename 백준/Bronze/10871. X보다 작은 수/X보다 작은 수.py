import sys
N,X = map(int, sys.stdin.readline().split())
li = list(map(int, sys.stdin.readline().split()))
for i in range(0,N):
    if(li[i]<X):
        print(li[i], end= ' ')