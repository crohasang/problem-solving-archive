import sys
from collections import deque

n, m = map(int, sys.stdin.readline().rstrip().split())

array = []

for _ in range(n):
    for _ in range(m):
        line = list(map(int, sys.stdin.readline().rstrip().split()))
        array.append(line)

        
visited = [[0] * m for _ in range(n)]
picture_count = 0
largest_picture_area = 0

dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

for i in range(n):
    for j in range(m):

        if array[i][j] == 1 and not visited[i][j]:
            queue = deque()
            queue.append((i, j))
            visited[i][j] = 1
            area = 1

            while queue:
                x, y = queue.popleft()
                for k in range(4):
                    nx = x + dx[k]
                    ny = y + dy[k]

                    if 0 <= nx < n and 0 <= ny < m:
                        if array[nx][ny] == 1 and not visited[nx][ny]:
                            visited[nx][ny] = 1
                            queue.append((nx, ny))
                            area += 1


            largest_picture_area = max(largest_picture_area, area)
            picture_count += 1

print(picture_count)
print(largest_picture_area)
            