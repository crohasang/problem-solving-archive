# dfs
# 0과 1이 들어가는 M * N 배열을 만든다.
# False와 True가 들어가는 M * N 배열을 만든다.
# 

import sys
sys.setrecursionlimit(10000)


dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]

def dfs(x, y, arr, visited, M, N):
    visited[x][y] = True
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < M and 0 <= ny < N and not visited[nx][ny] and arr[nx][ny] == 1:
            dfs(nx, ny, arr, visited, M, N)

T = int(sys.stdin.readline())

for i in range(T):
    M, N, K = map(int, sys.stdin.readline().strip().split(" "))
    arr = [[0] * N for _ in range(M)]
    visited = [[False] * N for _ in range(M)]
    
    for j in range(K):
        x, y = map(int, sys.stdin.readline().strip().split(" "))
        arr[x][y] = 1

    count = 0
    for k in range(N):
        for l in range(M):
            if arr[l][k] == 1 and not visited[l][k]:
                dfs(l, k, arr, visited, M, N)
                count += 1

    print(count)
    
    

    

