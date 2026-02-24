# 여기서 이제 절댓값을 추가해야 한다

import heapq
import sys

heap = []
N = int(sys.stdin.readline())

for _ in range(N):
    x = int(sys.stdin.readline())

    if x == 0:
        if len(heap) == 0:
            print(0)
        else:
            y = heapq.heappop(heap)[1]
            print(y)
    else:
        heapq.heappush(heap, (abs(x), x))