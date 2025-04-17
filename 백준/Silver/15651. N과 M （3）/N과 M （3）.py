import sys
from collections import deque

n , m = map(int, sys.stdin.readline().rstrip().split())

array = deque()
visited = [False] * (n+1)

def backtrack():
    if len(array) == m:
        print(' '.join(map(str, array)))
        return

    for i in range(1, n+1):
        array.append(i)
        backtrack()
        array.pop()

backtrack()
