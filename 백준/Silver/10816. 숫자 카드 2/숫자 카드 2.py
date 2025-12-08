
import sys

N = int(sys.stdin.readline())

arr = [0] * 20000001

first_line = list(map(int, sys.stdin.readline().split(" ")))

for i in range(N):
    arr[first_line[i] + 10000000] += 1

M = int(sys.stdin.readline())

second_line = list(map(int, sys.stdin.readline().split(" ")))

for i in range(M):
    print(arr[second_line[i] + 10000000], end = " ")