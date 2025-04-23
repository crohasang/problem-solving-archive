

# 0: 오른쪽, 1: 아래쪽, 2: 왼쪽, 3: 위쪽
dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]

T = int(input())

# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
for test_case in range(1, T + 1):

    n = int(input())

    arr = []

    for i in range(n):
        row = []
        for j in range(n):
            row.append(0)
        arr.append(row)
    
    x, y, dir = 0, 0, 0

    for num in range(1, n*n+1):
        arr[x][y] = num
        nx = x + dx[dir]
        ny = y + dy[dir]

        if nx < 0 or nx >= n or ny < 0 or ny >= n or arr[nx][ny] != 0:
            dir = (dir + 1) % 4
            nx = x + dx[dir]
            ny = y + dy[dir]
        
        x, y = nx, ny
    
    print(f"#{test_case}")

    for row in arr:
        print(' '.join(map(str, row)))