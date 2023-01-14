import sys
T = int(sys.stdin.readline())

for i in range(T):
    k = int(sys.stdin.readline())
    n = int(sys.stdin.readline())
    first = [i for i in range(1, n+1)]

    for a in range(k):
        new = []
        for b in range(n):
            new.append(sum(first[:b+1]))
        first = new.copy()
    print(first[-1])