import math

T = int(input())

# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
for test_case in range(1, T + 1):

    n , m = map(int, input().split())

    arr = []

    for i in range(n):
        line = list(map(int, input().split()))
        arr.append(line)

    quotient = n // m
    x, y, max_number = 0, 0, 0

    while(True):
        y = 0
        if x + m > n:
            break

        while(True):

            if y + m > n: 
                break

            sum = 0

            for k in range(x, x+m):
                for l in range(y, y+m):
                    sum = sum + arr[k][l]

            max_number = max(max_number, sum)

            y = y + 1
        
        x = x + 1

    
    print(f"#{test_case} {max_number}")