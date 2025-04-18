import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
array = list(map(int, sys.stdin.readline().rstrip().split()))
array.sort()

answer = []
visited = [False] * (n+1)

def backtrack(start):
    if len(answer) == m:
        print(' '.join(map(str, answer)))
        return

    
    for i in range(start, n):
        answer.append(array[i])
        backtrack(i)
        answer.pop()

backtrack(0)