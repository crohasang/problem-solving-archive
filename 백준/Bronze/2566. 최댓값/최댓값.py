pan = []

for i in range(9):
    row = list(map(int, input().split()))
    pan.append(row)

X_max = -1
X = 0
Y = 0
for i in range(9):
    for j in range(9):
        if(pan[i][j] > X_max):
            X_max = pan[i][j]
            X = i + 1
            Y = j + 1

print(X_max)
print(X, Y)