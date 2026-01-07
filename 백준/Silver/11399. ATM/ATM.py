# 1번부터 N번까지 번호가 매겨져 있다
# i번 사람이 돈을 인출하는데 걸리는 시간은 Pi분
# 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값

import sys

N = int(sys.stdin.readline())

arr = list(map(int, sys.stdin.readline().split(" ")))

arr.sort()

answer = 0
prefix_sum = 0

for i in range(N):
    prefix_sum += arr[i]
    answer += prefix_sum

print(answer)
    