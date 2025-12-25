import sys

M = int(sys.stdin.readline())
S = set()

for i in range(M):
    inputs = sys.stdin.readline().strip().split()

    command = inputs[0]

    if command == 'add':
        if inputs[1] not in S:
            S.add(inputs[1])
    
    elif command == 'remove':
        if inputs[1] in S:
            S.remove(inputs[1])
    
    elif command == 'check':
        if inputs[1] in S:
            print(1)
        else:
            print(0)

    elif command == 'toggle':
        if inputs[1] in S:
            S.remove(inputs[1])
        else:
            S.add(inputs[1])

    elif command == 'all':
        S = set(str(i) for i in range(1, 21))

    elif command == 'empty':
        S.clear()


    
    
