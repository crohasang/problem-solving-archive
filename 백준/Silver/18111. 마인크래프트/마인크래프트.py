# 땅의 높이는 256보다 작거나 같은 자연수 또는 0이다

# 블록을 제거하여 인벤토리에 넣는 데 걸리는 시간: 2초
# 블록을 꺼내어 위에 놓는 데 걸리는 시간: 1초

import sys

line = list(map(int, sys.stdin.readline().strip().split(" ")))
N, M, B = line[0], line[1], line[2]

arr = [0 for _ in range(257)]

for _ in range(N):
    line = list(map(int, sys.stdin.readline().strip().split(" ")))

    for element in line:
        arr[element] = arr[element] + 1
        

# 높이 0부터 256까지 순회

# 가능 기준
# B + 목표 높이보다 더 높은 블록들에서 뺀 블록들의 개수 >
# 목표 높이보다 더 낮은 블록들에서 더해줘야 되는 블록들의 개수

count_dict = {}

# i: 목표 높이, j: arr에 저장된 높이
for i in range(0, 257):
    count = 0
    is_possible = B

    for j in range(0, 257):
        if arr[j] > 0:

            # 목표 높이가 저장된 높이보다 더 큰 경우
            # is_possible에 arr[j] x (i - j)만큼 빼준다.
            # count에 arr[j] x (i - j)만큼 더 해준다.
            if i > j:
                is_possible = is_possible - (arr[j] * (i-j))
                count = count + (arr[j] * (i-j))

            # 목표 높이가 저장된 높이보다 더 작은 경우
            # is_possible에 arr[j] x (j - i)만큼 더해준다.
            # count에 arr[j] x 2 x (j - i)만큼 더해준다.
            elif i < j:
                is_possible = is_possible + (arr[j] * (j - i))
                count = count + arr[j] * 2 * (j - i)
                


    # 만약 is_possible이 0보다 크거나 같으면 count_dict에
    # key: i, value: count를 추가해준다.
    if is_possible >= 0:
        count_dict[i] = count

sorted_count_dict = sorted(count_dict.items(), key=lambda x: (x[1], -x[0]))
answer_height, answer_time_count = sorted_count_dict[0]
print(answer_time_count, answer_height)