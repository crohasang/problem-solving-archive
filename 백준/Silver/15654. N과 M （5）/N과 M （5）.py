import sys

n,m = map(int, sys.stdin.readline().rstrip().split())
array = list(map(int, sys.stdin.readline().rstrip().split()))
visited = [False] * (n+1)
sorted_array = sorted(array)

new_array = []

def backtrack():
    if len(new_array) == m:
        print(' '.join(map(str, new_array)))
        return

    for i in range(n):
        if not visited[i]:
            visited[i] = True
            new_array.append(sorted_array[i])
            backtrack()
            new_array.pop()
            visited[i] = False

backtrack()
        
        