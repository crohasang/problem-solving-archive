# 각 알파벳에 해당하는 숫자를 number라고 하자
# number * 31 ^ number를 다 더하고
# 1234567891로 나눠준 값을 print하면 된다


import sys

L = int(sys.stdin.readline())
alphabets = sys.stdin.readline()

num = 0 
for i in range(L):
    alphabet_num = ord(alphabets[i]) - 96
    num += alphabet_num * (31 ** i)

print(num % 1234567891)