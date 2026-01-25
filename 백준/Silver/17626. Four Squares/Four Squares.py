# 모든 자연수는 넷 혹은 그 이하의 제곱수의 합으로 표현할 수 있다
# 자연수 n이 주어질 때, n을 최소 개수의 제곱수 합으로 표현하는 컴퓨터 프로그램

# 223 * 223 = 49729
# 1부터 223까지의 배열을 만든다
# 1부터 223까지 배열을 돌면서 기존의 dp 배열의 이전 값을 사용해야 한다
# 2중 for문 사용
# (a의 제곱) = (b의 제곱) + (a의 제곱) - (b의 제곱) 
# b를 1부터 루트 n까지 증가시킨다
# dp[b의 제곱]이 가장 작은 값이 카운트가 된다. 

import sys
import math

n = int(sys.stdin.readline())

d = [i for i in range(n + 1)]

for i in range(3, n+1):
    current_min = 99999
    
    for j in range(1, math.isqrt(i) + 1):       
        current_min = min(current_min, d[i-(j*j)] + 1)

    d[i] = current_min

print(d[n])