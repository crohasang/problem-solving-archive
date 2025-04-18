import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
array = list(map(int, sys.stdin.readline().rstrip().split()))
array.sort()

visited = [False] * (n+1)
answer = []

def backtrack():
    if len(answer) == m:
        print(' '.join(map(str, answer)))
        return

    for i in range(0, n):
            answer.append(array[i])
            backtrack()
            answer.pop()

backtrack()