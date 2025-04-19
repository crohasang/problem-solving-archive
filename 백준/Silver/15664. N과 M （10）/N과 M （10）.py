import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
array = list(map(int, sys.stdin.readline().rstrip().split()))
answer = []
array.sort()
visited = [False] * (n+1)
latest = ''


def backtrack(start):
    if len(answer) == m:
        current = ' '.join(map(str, answer))

        global latest 
        if latest != current:
            print(current)
            latest = current
            return

        return

    for i in range(start, n):
        if i > 0 and array[i] == array[i-1] and not visited[i-1]:
            continue;
        
        if not visited[i]:
            visited[i] = True
            answer.append(array[i])
            backtrack(i+1)
            answer.pop()
            visited[i] = False
        

backtrack(0)

