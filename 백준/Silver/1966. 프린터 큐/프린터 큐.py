import sys
from collections import deque


# 첫 번째 줄

# 문서의 개수 N
# 몇 번째로 인쇄되었는지 궁금한 문서가 몇번재 놓여있는지 나타내는 정수 M

# 두 번째 줄
# N개 문서의 중요도가 차례대로 주어짐

# 인덱스 M에 해당하는게 몇번째로 빠져나는지 알고 싶은거잖아
# 그냥 빡구현해보자

test_case_number = int(sys.stdin.readline())


for i in range(test_case_number):
    N, M = map(int, sys.stdin.readline().split(" "))

    d = deque(map(int, sys.stdin.readline().split(" ")))
    indexed_d = deque(enumerate(d))

    count = 0

    while(True):
        max_value = max(indexed_d,key=lambda x:x[1])[1]

        if(indexed_d[0][1] == max_value):
            
            # 인덱스 M에 해당하는 숫자가 최고 값일 때
            if(indexed_d[0][0] == M):
                print(count + 1)
                break

            # 마지막일 때
            if(len(indexed_d) <= 0):
                print(count + 1)
                break
            
            indexed_d.popleft()
            count += 1

        else:
            temp = indexed_d.popleft()
            indexed_d.append(temp)

        

    
        
