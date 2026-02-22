# 케빈 베이컨의 6단계 법칙
# 첫째 줄에 유저의 수 N과 친구 관계의 수 M이 주어진다.
# 서로 선으로 이어주면 되는데
# 한 점에서, 다른 모든 점까지 갈 수 있는 최단값들의 합

import sys
from collections import deque

def bfs(start):
    distances = [-1] * (N+1)
    queue = deque([start])
    distances[start] = 0

    while queue:
        curr = queue.popleft()

        for neighbor in adj[curr]:
            if distances[neighbor] == -1:
                distances[neighbor] = distances[curr] + 1
                queue.append(neighbor)

    return sum(distances[1:])

first_line = list(map(int, sys.stdin.readline().strip().split(" ")))
N, M = first_line[0], first_line[1]

adj = [[] for _ in range(N+1)]
visited = [False for _ in range(N)]

for _ in range(M):
    u, v = map(int, sys.stdin.readline().strip().split(" "))
    adj[u].append(v)
    adj[v].append(u)

result_dict = {}
for i in range(1, N+1):
    kevin_result = bfs(i)
    result_dict[i] = kevin_result

result_list = list(result_dict.items())
result_list.sort(key = lambda x : (x[1], x[0]))

print(result_list[0][0])

