import sys

def check(a):
    if a == 1:
        return False
    else:
        for i in range(2,int(a**0.5)+1):
            if(a%i==0):
                return False
        return True
    
numbers = list(range(2,246913))
li = []
for i in numbers:
    if check(i):
        li.append(i)
            
while(True):
    count = 0
    n = int(sys.stdin.readline())
    if(n == 0):
        break

    else:
        for i in li:
            if(i>n and i<=n*2 ):
                count = count + 1
        print(count)

