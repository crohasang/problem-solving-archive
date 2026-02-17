# 좌표 압축

import sys

N = int(sys.stdin.readline())
line = list(map(int, sys.stdin.readline().strip().split(" ")))
sorted_line = sorted(set(line))

dict = {}
rank = 0

for element in sorted_line:
    dict[element] = rank
    rank = rank + 1

for element in line:
    print(dict[element], end = " ")