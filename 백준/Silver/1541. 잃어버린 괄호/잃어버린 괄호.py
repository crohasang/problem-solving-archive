# 괄호를 적절히 쳐서 이 식의 값을 최소로 만드는 프로그램

# '-' 뒤에 괄호를 치면 좋다
# '-' 기준으로 전부 쪼개면 되려나?

import sys

line = sys.stdin.readline().rstrip().split("-")

groups = []
for part in line:
    part = sum(map(int, part.split('+')))
    groups.append(part)
    
answer = groups[0]
for i in range(1, len(groups)):
    answer = answer - groups[i]

print(answer)


