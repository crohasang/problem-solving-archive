import sys


N = int(sys.stdin.readline())

num = 1

while(True):
    num_str = str(num)

    num_digit_sum = 0
    for i in range(len(num_str)):
        num_digit_sum += int(num_str[i])

    if (num + num_digit_sum == N):
        print(num)
        break
    else:
        num += 1

    if(num >= 1000001):
        print(0)
        break