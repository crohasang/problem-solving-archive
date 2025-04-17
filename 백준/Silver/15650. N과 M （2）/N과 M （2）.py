import sys
from collections import deque

# n: 전체 숫자 범위, m: 선택할 숫자 개수
n, m = map(int, sys.stdin.readline().rstrip().split())

# 현재 순열을 저장할 컨테이너(덱 사용)
array = deque()
# 숫자 사용 여부 추적 (인덱스 1부터 n까지 사용)
visited = [False] * (n + 1)

def backtrack():
    # 종료 조건: 원하는 길이의 순열 완성 시
    if len(array) == m:
        print(' '.join(map(str, array)))  # 공백 구분 출력
        return

    if not array:
        start = 1
    else:
        start = array[-1]

        
    for i in range(start, n+1):
        if not visited[i] :  # 미사용 숫자인 경우
            visited[i] = True  # 사용 표시
            array.append(i)  # 순열에 추가
            backtrack()  # 재귀 호출 (다음 요소 선택)
            array.pop()  # 마지막 요소 제거 (백트래킹)
            visited[i] = False  # 사용 해제

# 백트래킹 알고리즘 시작
backtrack()


