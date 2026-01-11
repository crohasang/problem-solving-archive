'''
그냥 그대로 하면 되지 않음?
시간 초과 나네? 어떡해야함?

'''

import sys

N, M = map(int, sys.stdin.readline().split(" "))

arr = list(map(int, sys.stdin.readline().strip().split(" ")))

acc_arr = []
acc_num = 0

for i in range(N):
    acc_num += arr[i]
    acc_arr.append(acc_num)
    

for i in range(M):
    start, end = map(int, sys.stdin.readline().strip().split(" "))

    sum = 0
    
    if(start != end):
        if(start > 1):
            sum = acc_arr[end-1] - acc_arr[start-2]
        else:
            sum = acc_arr[end-1]
    else:
        sum = arr[end-1]

    print(sum)