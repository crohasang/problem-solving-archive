# 저장될 때부터 모든 토마토가 익어있는 상태이면 0을 출력해야되고
# 토마토가 모두 익지는 못하는 상황이면 -1을 출력해야한다.
# 정수 1은 익은 토마토, 정수 0은 익지 않은 토마토, 정수 -1은 토마토가 들어있지 않은 칸

from collections import deque
import sys
        

m, n, h = map(int, sys.stdin.readline().strip().split(" "))


arr = []
for _ in range(h):
    layer = []
    for _ in range(n):
        row = list(map(int, sys.stdin.readline().strip().split(" ")))
        layer.append(row)

    arr.append(layer)

visited = []
for i in range(h):
    layer = []
    for j in range(n):
        row = [False] * m
        layer.append(row)
    visited.append(layer)

queue = deque()

dx = [-1,1,0,0,0,0]
dy = [0,0,-1,1,0,0]
dz = [0,0,0,0,1,-1]

answer = 0

def bfs():
    while queue:
        x,y,z = queue.popleft()

        for i in range(6):
            nx = x + dx[i]
            ny = y + dy[i]
            nz = z + dz[i]

            if nx < 0 or nx >= h or ny < 0 or ny >= n or nz < 0 or nz >= m:
                continue

            if arr[nx][ny][nz] == 0 and visited[nx][ny][nz] == False:
                queue.append((nx,ny,nz))
                arr[nx][ny][nz] = arr[x][y][z] + 1
                visited[nx][ny][nz] = True

for x in range(h):
    for y in range(n):
        for z in range(m):
            if arr[x][y][z] == 1 and visited[x][y][z] == 0:
                queue.append((x,y,z))
                visited[x][y][z] = True

bfs()

for x in arr:
    for y in x:
        for z in y:
            if z == 0:
                print(-1)
                exit(0)
        answer = max(answer, max(y))

print(answer - 1)
            
            
        
        