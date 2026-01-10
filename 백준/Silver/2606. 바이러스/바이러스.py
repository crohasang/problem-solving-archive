# 1번 컴퓨터의 네트워크에 있는 컴퓨터의 개수를 세면 된다.
# 저 라인들을 입력받아서, 어떻게 표시하면 될까?
# computer_num 크기의 리스트를 만들고
# 맨 처음 입력받는 숫자의 인덱스에 두 번째 입력받는 숫자를 집어넣는다.
# computer_num 크기의 visited 리스트도 만들어야겠지
# 특정 인덱스의 모든 visited 값이 true이면 그 때 모든 네트워크를 돈 것


import sys

answer = 0
computer_num = int(sys.stdin.readline())
lines_num = int(sys.stdin.readline())

visited = [False] * (computer_num + 1)
network = [[] for _ in range(computer_num + 1)]


# dfs 함수
def dfs(current_node):
    global answer
    node_len = len(network[current_node])

    for i in range(node_len):
        if (visited[network[current_node][i]] == False):
            answer += 1
            visited[network[current_node][i]] = True
            dfs(network[current_node][i])

    return


for i in range(lines_num):
    numbers = sys.stdin.readline().strip()
    start, end = map(int , numbers.split())
    network[start].append(end)
    network[end].append(start)

visited[1] = True
dfs(1)
print(answer)