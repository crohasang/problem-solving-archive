import sys

n = int(sys.stdin.readline().rstrip())

arr = []
for i in range(n):
    arr.append(sys.stdin.readline().rstrip())


def get_sum(word):
    total = 0
    for char in word:
        if char.isdigit():
            total += int(char)
    return total

arr.sort(key = lambda x: (len(x), get_sum(x), x))

for element in arr:
    print(element)