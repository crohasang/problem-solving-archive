from collections import deque
import sys

dx = [-1,0,1,0]
dy = [0,1,0,-1]

def bfs(x_start, y_start):
    queue = deque()
    queue.append([x_start, y_start])

    while queue:
        x, y = queue.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue

            if answer[nx][ny] != -1:
                continue

            answer[nx][ny] = answer[x][y] + 1
            queue.append([nx,ny])
            

n, m = map(int, sys.stdin.readline().strip().split(" "))

arr = []

for i in range(n):
    arr.append(list(map(int, sys.stdin.readline().strip().split(" "))))


answer = []
x_start, y_start = 0, 0

for i in range(n):
    answer.append([])
    for j in range(m):
        if arr[i][j] == 2:
            x_start, y_start = i, j
            answer[i].append(0)

        elif arr[i][j] == 1:
            answer[i].append(-1)

        else:
            answer[i].append(0)

bfs(x_start, y_start)

for i in range(n):
    for j in range(m):
        print(answer[i][j], end = ' ')
    print()

