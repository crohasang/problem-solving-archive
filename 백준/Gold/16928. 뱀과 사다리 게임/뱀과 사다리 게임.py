from collections import deque
import sys

N, M = map(int, sys.stdin.readline().strip().split(" "))
board = [0] * 101
visited = [False] * 101

ladder = dict()
snake = dict()

for _ in range(N):
    x, y = map(int, sys.stdin.readline().split(" "))
    ladder[x] = y

for _ in range(M):
    x, y= map(int, sys.stdin.readline().split(" "))
    snake[x] = y


def bfs(start):
    queue = deque()
    queue.append(start)

    visited[start] = True

    while queue:
        x = queue.popleft()

        for i in range(1,7):
            nx = x + i

            if 0 < nx <= 100 and not visited[nx]:
                if nx in ladder:
                    nx = ladder[nx]

                if nx in snake:
                    nx = snake[nx]

                if not visited[nx]:
                    queue.append(nx)
                    visited[nx] = True
                    board[nx] = board[x] + 1

bfs(1)
print(board[100])
                    
                    