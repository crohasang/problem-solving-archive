# 가중치 없는 방향 그래프 G
# 모든 정점 (i,j)에 대해서, i에서 j로 가는 길이가 양수인 경로가 있는지 없는지
# 구하는 프로그램 작성
import sys
from collections import deque

N = int(sys.stdin.readline())

arr = [[] for _ in range(N)]
visited = [[0] * N for _ in range(N)]

def bfs(start):
    q = deque([start])

    while q:
        curr = q.popleft()
        for next in arr[curr]:
            if visited[start][next] == 0:
                visited[start][next] = 1
                q.append(next)
 

for i in range(N):
    line = list(map(int, sys.stdin.readline().strip().split(" ")))
    for j in range(len(line)):
        if line[j] == 1:
            arr[i].append(j)


for i in range(N):
    bfs(i)
    print(' '.join(map(str, visited[i])))