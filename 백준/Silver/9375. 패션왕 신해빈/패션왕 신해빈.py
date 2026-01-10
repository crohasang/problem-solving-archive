from collections import defaultdict
import sys

# 옷의 타입이 한 개 일때
# 순회하면서 타입 당 옷의 개수를 더해주면 된다.

# 옷의 타입이 두 개 일때
# 순회하면서 타입을 두 개씩 정해 타입별 옷의 개수들을 곱한뒤 더해주면 된다

# 즉, 타입을 n개씩 정해서 타입별 옷의 개수들을 곱하면 된다

# 타입이 5개 있다고 할 때, 타입 3개를 순회하면서 곱해서 더해주는 방법은?

# (타입의 옷의 개수 + 1(아무걳도 안입을 경우))을 다 곱해주고 1을 빼면된다
# 1을 빼는 이유: 전부 안 입을 경우

N = int(sys.stdin.readline())

for i in range(N):
    clothes_count = int(sys.stdin.readline())
    fashion_dict = defaultdict(list)
    count = 1
    
    for i in range(clothes_count):
        name, type = sys.stdin.readline().strip().split(" ")
        fashion_dict[type].append(name)

    types = fashion_dict.keys()
    
    for t in types:
        count *= (len(fashion_dict[t]) + 1)

    print(count - 1)
    