from collections import deque

# 입력
N = int(input())
arr = list(map(int, input().split()))

while len(arr) < 3:
    arr.append(0)

arr = tuple(arr)

attackArr = [(1,3,9), (1,9,3), (3,1,9), (3,9,1), (9,1,3), (9,3,1)]

# 현재 arr에 저 attackArr을 각 Index에 맞게 빼고,
# 배열 안의 모든 요소가 0 이하가 되는지 카운트를 한다.

def bfs(start):
    visited = set()
    queue = deque()
    queue.append((start, 0))
    visited.add(start)

    while queue:
        cur, count = queue.popleft()

        if cur[0] == 0 and cur[1] == 0 and cur[2] == 0:
            return count

        for attack in attackArr:
            next_tuple = (
                max(cur[0] - attack[0], 0),
                max(cur[1] - attack[1], 0),
                max(cur[2] - attack[2], 0)
            )

            if next_tuple not in visited:
                visited.add(next_tuple)
                queue.append((next_tuple, count + 1))

    return count;


answer = bfs(arr)
print(answer)
