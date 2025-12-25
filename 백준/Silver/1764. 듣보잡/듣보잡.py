import sys

N, M = map(int, sys.stdin.readline().split(" "))

set_N = set()
set_M = set()

for i in range(N):
    set_N.add(sys.stdin.readline().strip())

for i in range(M):
    set_M.add(sys.stdin.readline().strip())

answer_set = (set_N & set_M)

print(len(answer_set))

for item in sorted(answer_set):
    print(item)