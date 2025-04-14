import sys

a, b, c = map(int, sys.stdin.readline().rstrip().split())

result = pow(a, b, c)

print(result)