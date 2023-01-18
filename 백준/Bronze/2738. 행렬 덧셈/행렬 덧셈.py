import sys

N, M = map(int, input().split())

rows = N
cols = M

arr1 = [[int(x) for x in input().split()] for i in range(rows)]
arr2 = [[int(y) for y in input().split()] for i in range(rows)]

answer = [[0 for j in range(cols)] for i in range(rows)]

for i in range(rows):
    for j in range(cols):
        answer[i][j] = arr1[i][j] + arr2[i][j]
        print("%s"%(answer[i][j]), end= " ")
    print()
        