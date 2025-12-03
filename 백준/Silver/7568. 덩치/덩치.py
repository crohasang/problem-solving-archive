import sys

N = int(sys.stdin.readline())

arr = []
for i in range(N):
    arr.append(list(map(int , sys.stdin.readline().split())))

answer = []

for i in range(N):
    count = 0
    
    for j in range(N):
        if(i != j):
            if(arr[i][0] < arr[j][0] and
               arr[i][1] < arr[j][1]):
                count += 1

    print(count + 1, end = " ")