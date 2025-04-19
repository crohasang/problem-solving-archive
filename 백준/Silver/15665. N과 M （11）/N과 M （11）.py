import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
array = list(map(int, sys.stdin.readline().rstrip().split()))
answer = []
array.sort()
latest = ''


def backtrack():
    if len(answer) == m:
        current = ' '.join(map(str, answer))

        global latest 
        if latest != current:
            print(current)
            latest = current
            return

        return

    for i in range(n):
        if i > 0 and array[i] == array[i-1]:
            continue;
        
        answer.append(array[i])
        backtrack()
        answer.pop()
        

backtrack()

