import sys
N = int(sys.stdin.readline())
num = list(map(int,sys.stdin.readline().split()))
count = 0

for i in num:
    exist = True
    if(i != 1):
        for j in range(2,i):
            if(i%j == 0):
                exist = False
    
        if(exist == True):
            count += 1

    else:
        pass
    
print(count)