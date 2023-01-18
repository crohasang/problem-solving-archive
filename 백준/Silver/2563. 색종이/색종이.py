paper = [[0]*101 for i in range(101)]

T = int(input())

for i in range(T):
    x,y = map(int, input().split())

    for i in range(10):
        for j in range(10):
            paper[x+i][y+j] = 1


count = 0
for i in paper:
    count = count + sum(i)
print(count)