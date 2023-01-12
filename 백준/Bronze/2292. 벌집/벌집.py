import sys
N = int(sys.stdin.readline())
x = 1
count = 1

while(True):

    if(x>=N):
        print(count)
        break

    x = x + 6 * count
    count += 1
    