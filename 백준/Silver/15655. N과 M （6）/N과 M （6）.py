import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
array = list(map(int, sys.stdin.readline().split()))
array.sort()

answer = []


def backtrack(start):
    if len(answer) == m:
        print(' '.join(map(str, answer)))

    for i in range(start, n):
            answer.append(array[i])
            backtrack(i+1)
            answer.pop()


backtrack(0)