import sys
from collections import Counter
import math

N = int(sys.stdin.readline())

count = 0
number = 666

while(True):

    if ("666" in str(number)):
        count = count + 1

    if(count == N):
        print(number)
        break

    number = number + 1
    
    