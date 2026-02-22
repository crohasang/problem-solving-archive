# N개의 과일이 꽂혀있는 과일 탕후루
# 1~9까지 번호가 붙어있고, 앞쪽부터 차례로 S1 ~ SN번 과일이 꽂혀있음
# 과일을 두 종류 이하로 사용해달라는 요청
# 막대의 앞쪽과 뒤쪽에서 몇 개의 과일을 빼서 두 종류 이하
# 과일을 두 종류 이하로 사용한 탕후루 중에서 과일의 개수가 가장 많은 탕후루의 과일 개수

# fruit_count 만들어서 업데이트
# 

import sys

N = int(sys.stdin.readline())

tanghulu_arr = list(map(int, sys.stdin.readline().strip().split(" ")))

# key: 과일 이름, value: 과일 개수
fruit_count = {}

# 왼쪽 포인터
left = 0

# 배열 가장 길 때 길이
max_len = 0

for right in range(N):
    fruit = tanghulu_arr[right]
    fruit_count[fruit] = fruit_count.get(fruit, 0) + 1

    while len(fruit_count) > 2:
        left_fruit = tanghulu_arr[left]
        fruit_count[left_fruit] -= 1
        left = left + 1

        if fruit_count[left_fruit] == 0:
            del fruit_count[left_fruit]

    current_len = right - left + 1
    if current_len > max_len:
        max_len = current_len

print(max_len)
