import sys
from collections import deque

n, m = map(int, sys.stdin.readline().rstrip().split())

array = []

for _ in range(n):
    array.append(list(map(int, sys.stdin.readline().strip())))

visited = [[0] * m for _ in range (n)]

dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

count = 0

def bfs(x, y):
    global count

    if array[0][0] == 1:
        count += 1

    queue = deque()
    queue.append((x, y))
    visited[x][y] = 1

    while queue:
        x, y = queue.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if 0 <= nx < n and 0 <= ny < m:
                if array[nx][ny] == 1 and visited[nx][ny] == 0:
                    visited[nx][ny] = visited[x][y] + 1
                    queue.append((nx, ny))



bfs(0,0)

print(visited[n-1][m-1])
