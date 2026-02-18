# DFS?

import sys
sys.setrecursionlimit(10**6)

line = list(map(int, sys.stdin.readline().split(" ")))
N, M = line[0], line[1]
answer = 0

dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]

def dfs(x, y, visited):
    global answer

    for i in range(4):
        new_x = x + dx[i]
        new_y = y + dy[i]

        if 0 <= new_x < N and 0 <= new_y < M and arr[new_x][new_y] != 'X' and not visited[new_x][new_y]:
            visited[new_x][new_y] = True
    
            if arr[new_x][new_y] == 'P':
                answer = answer + 1
    
            dfs(new_x, new_y, visited)

    return


# 2차원 배열 입력을 어떻게 받지
# visited도 같이 받는게 좋겠지
visited = [[False] * M for _ in range(N)]
arr = [[''] * M for _ in range(N)]

for i in range(N):
    line = list(sys.stdin.readline().strip())
    for j in range(M):
        arr[i][j] = line[j]

        if arr[i][j] == 'I':
            initial_x = i
            initial_y = j
            visited[i][j] = True

dfs(initial_x, initial_y, visited)

if answer == 0:
    print('TT')
else:
    print(answer)


    