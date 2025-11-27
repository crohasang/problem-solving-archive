import math
import sys

# 배열로 입력받는다
# N의 15%가 얼만지 구해서 (반올림 처리), 그에 해당하는 만큼 배열에서 제외한다
# 숫자들을 제외하고 만들어진 배열의 평균을 구해서 return 한다

n = int(sys.stdin.readline())

if (n == 0):
    print(0)
else:    

    n_fifteen = math.floor(n * 0.15 + 0.5)
    
    
    arr = []
    
    for i in range(n):
        num = int(sys.stdin.readline())
        arr.append(num)
    
    arr.sort()
    answer = 0
    for i in range(n_fifteen, n - n_fifteen):
        answer += arr[i]
    
    print(math.floor(answer / (n - (n_fifteen * 2)) + 0.5))


