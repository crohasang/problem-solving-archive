import sys


for i in range(3):
    num = sys.stdin.readline().rstrip()

    if num.isdigit():
        answer_num = int(num) + (3-i)
        break


if (answer_num % 15 == 0):
    print("FizzBuzz")
elif (answer_num % 3 == 0):
    print("Fizz")
elif (answer_num % 5 == 0):
    print("Buzz")
else:
    print(answer_num)