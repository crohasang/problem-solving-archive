import sys

N = int(sys.stdin.readline())
numbers = []
for i in range(N):
    x = int(sys.stdin.readline())
    numbers.append(x)
numbers.sort()

for i in numbers:
    print(i)
