# x좌표로 정렬하고, x좌표 값이 같으면 y좌표로 정렬한다

import sys
    
N = int(sys.stdin.readline())
arr = []

for i in range(N):
    arr.append(list(map(int, sys.stdin.readline().split(" "))))


arr.sort()

for i in range(N):
    print(f"{arr[i][0]} {arr[i][1]}")