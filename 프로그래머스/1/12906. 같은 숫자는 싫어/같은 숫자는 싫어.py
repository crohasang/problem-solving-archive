from collections import deque

def solution(arr):
    stack = deque()
    
    for i in arr:
        if not stack or stack[-1] != i:
            stack.append(i)
    
    return list(stack)