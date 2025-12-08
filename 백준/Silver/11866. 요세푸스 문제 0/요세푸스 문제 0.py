from collections import deque

import sys

N, M = map(int, (sys.stdin.readline().split(" ")) )

dq = deque(range(1, N+1))
answer = []

while dq:
    dq.rotate(1-M)
    answer.append(dq.popleft())

print("<", end="")
print(", ".join(map(str, answer)), end="")
print(">")

