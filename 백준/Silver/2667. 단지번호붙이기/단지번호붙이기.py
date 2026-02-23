import sys
from collections import deque

N = int(sys.stdin.readline())
arr = [list(map(int, sys.stdin.readline().strip())) for _ in range(N)]
visited = [[False] * N for _ in range(N)]
danji_count = 0
danji_sizes = []
dx=[1,0,-1,0]
dy=[0,1,0,-1]

def bfs(x,y):
    queue = deque([(x,y)])
    visited[x][y] = True
    house_count = 1

    while queue:
        cx, cy = queue.popleft()

        for k in range(4):
            nx = cx + dx[k]
            ny = cy + dy[k]

            if 0 <= nx < N and 0 <= ny < N and\
            arr[nx][ny] == 1 and not visited[nx][ny]:
                visited[nx][ny] = True
                queue.append((nx, ny))
                house_count += 1

    return house_count

for i in range(N):
    for j in range(N):
        if arr[i][j] == 1 and not visited[i][j]:
            danji_sizes.append(bfs(i,j))
            danji_count += 1

print(danji_count)
for size in sorted(danji_sizes):
    print(size)