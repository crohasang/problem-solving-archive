# 1 0 -> 2
# 0 1 0 -> 3
# 1 0 0 1 0 -> 5 
# 0 1 0 1 0 0 1 0 -> 8
# 1 0 0 1 0 0 1 0 1 0 0 1 0 -> 13
# pibonacci

import sys

n = int(sys.stdin.readline())


def fib(x):
    if x == 1 or x == 2:
        return 1
        
    dp = [0] * (x + 1)
    dp[1] = dp[2] = 1
    for i in range(3, x+1):
        dp[i] = dp[i-1] + dp[i-2]

    return dp[x]
print(fib(n))
