from collections import deque

T = int(input())

for _ in range(T):
    s = input()
    dq = deque()
    is_valid = True
    
    for char in s:
        if char == '(':
            dq.append(char)
        elif char == ')':
            
            if len(dq) == 0 or dq[-1] != '(':
                is_valid = False
                break

            dq.pop()

    if (is_valid and len(dq) == 0 ):
        print("YES")
    else:
        print("NO")
        