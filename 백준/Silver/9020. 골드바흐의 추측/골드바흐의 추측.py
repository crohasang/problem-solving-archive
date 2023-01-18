import sys

def sosu(a):
    if (a==1):
        return False
    for i in range(2, int(a**0.5)+1):
        if(a%i==0):
            return False
    return True


T = int(sys.stdin.readline())

for i in range(T):
    n = int(sys.stdin.readline())

    half = int(n/2)

    if(sosu(half)):
        print(half, half)

    else:
        while(True):
            half = half + 1
            if(sosu(half)):
                if(sosu(n-half)):
                    print(n-half, half)
                    break
            else:
                continue