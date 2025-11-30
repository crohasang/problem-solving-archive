# 티셔츠 6가지 사이즈, 같은 사이즈의 T장 묶음으로만 주문 가능
# 펜은 한 종류로, P자루씩 묶음으로 주문하거나 한 자루씩 주문 가능
# 티셔츠는 남아도 되지만 부족해서는 안된다
# 펜은 정확히 참가자 수만큼 준비되어야

import sys
import math

N = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
T,P = map(int, sys.stdin.readline().split())

sum = 0

for i in range(6):
    if (arr[i] == 0):
        pass
    elif (arr[i] <= T):
        sum += 1
    else:
        sum += math.ceil(arr[i] / T)

print(sum)
print(N // P, N % P)
