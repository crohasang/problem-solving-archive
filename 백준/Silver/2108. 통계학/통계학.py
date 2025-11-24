import sys
from collections import Counter
import math

N = int(sys.stdin.readline())

arr = []
sum = 0

for i in range(N):
    j = int(sys.stdin.readline())
    arr.append(j)
    sum += j

print(round(sum / N))

arr_sort = sorted(arr)
print(arr_sort[math.floor(len(arr) / 2 )])

counter = Counter(arr)
most_common = counter.most_common()
max_count = most_common[0][1]

modes = []
for num, cnt in most_common:
    if cnt == max_count:
        modes.append(num)
modes.sort()

if len(modes) > 1:
    print(modes[1])
else:
    print(modes[0])

print(arr_sort[-1] - arr_sort[0])