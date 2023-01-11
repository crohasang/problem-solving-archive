import sys
li = []
for i in range(9):
    li.append(int(sys.stdin.readline()))

print(max(li))
print(li.index(max(li))+1)