'''
2 * n 타일링 2


'''

import sys

arr = [0] * 1001
arr[1], arr[2] = 1, 3

for i in range(3, 1001):
    arr[i] = arr[i-1] + arr[i-2] * 2

n = int(sys.stdin.readline())

print(arr[n] % 10007)