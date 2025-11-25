import sys

N = int(sys.stdin.readline())

answer = 1

while N > 0:
    answer *= N
    N -= 1


answer_str = str(answer)

zero_count = 0

for i in range(len(answer_str)):
    
    if(answer_str[-(i+1)] == '0'):
        zero_count += 1
    else:
        break

print(zero_count)