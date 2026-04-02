from collections import deque
import sys

dx = [1, 0, -1 ,0]
dy = [0, 1, 0, -1]

def bfs(x, y):
    queue = deque()
    queue.append((x, y))
    visited[x][y] = True

    while queue:
        x, y = queue.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if nx < 0 or nx >= N or ny < 0 or ny >= N:
                continue

            if not visited[nx][ny] and arr[nx][ny] == arr[x][y]:
                visited[nx][ny] = True
                queue.append((nx, ny))


N = int(sys.stdin.readline())

arr = []
for _ in range(N):
    line = sys.stdin.readline().strip()
    arr.append(list(line))
    

visited = []
for _ in range(N):
    row = [False] * N
    visited.append(row)

answer = [0, 0]

for i in range(N):
    for j in range(N):
        if not visited[i][j]:
            bfs(i, j)
            answer[0] += 1

for i in range(N):
    for j in range(N):
        if arr[i][j] == 'G':
            arr[i][j] = 'R'

visited = []
for _ in range(N):
    row = [False] * N
    visited.append(row)

for i in range(N):
    for j in range(N):
        if not visited[i][j]:
            bfs(i, j)
            answer[1] += 1

print(' '.join(map(str, answer)))
