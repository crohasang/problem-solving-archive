# m = 10 - (a+3b+c+3d+e+3f+g+3h+i+3j+k+3l) mod 10
# 구해야 하는 것: 훼손된 숫자 *이 무엇인지
import sys

number = (sys.stdin.readline().strip())
number_list = list(number)
m = int(number_list[-1])

sum = 0
multiple_number = 0
for i in range(12):    
    if(number_list[i] == '*'):
        
        if(i % 2 == 0):
            multiple_number = 1
        else:
            multiple_number = 3
            
    else:
        
        if(i % 2 == 0):
            sum += int(number_list[i])
        else:
            sum += (3 * int(number_list[i]))

# m = 10 - (sum + multiple_number * answer) mod 10
for answer in range(10):
    if(((sum + multiple_number * answer + m) % 10) == 0):
        print(answer)
        break