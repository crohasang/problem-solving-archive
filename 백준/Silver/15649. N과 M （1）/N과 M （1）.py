import sys

n, m = map(int, sys.stdin.readline().rstrip().split())

visited = [False] * (n + 1)
selected = []

def backtrack(depth):
    if depth == m:
        print(' '.join(map(str, selected)))
        return

    for i in range(1, n+1):

        if not visited[i]:
            visited[i] = True
            selected.append(i)
            backtrack(depth + 1)
            selected.pop()
            visited[i] = False

backtrack(0)

