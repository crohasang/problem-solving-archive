# fibonacci(1)은 1을 출력
# fibonacci(0)은 0을 출력

# f(0)은 0 한번 출력
# f(1)은 1 한번 출력

# f(2)는 f(1)과 f(0)을 리턴
# f(1)은 1을 출력하고 f(0)은 0을 출력

# f(3)은
# f(2)와 f(1)을 출력
# f(2)는 f(1)과 f(0)을 리턴
# 총 f(1) 두번 f(0) 한 번 -> 1 두개 0 한개

# 그냥 f(6) = f(5) + f(4) + f(3) + f(2) + f(1)...만 했는데
# 이게 아니라 f(6) = f(5) + f(4)
# 이렇게 밑으로 내려가서 쪼개야한다


import sys

pibo_arr = [[0,0] for _ in range(41)] 
pibo_arr[0] = [1,0]
pibo_arr[1] = [0,1]
pibo_arr[2] = [1,1]
pibo_arr[3] = [1,2]

for i in range(4,41):
    pibo_arr[i][0] = pibo_arr[i-1][0] + pibo_arr[i-2][0]
    pibo_arr[i][1] = pibo_arr[i-1][1] + pibo_arr[i-2][1]

T = int(sys.stdin.readline())

for i in range(T):
    num = int(sys.stdin.readline())
    print(f"{pibo_arr[num][0]} {pibo_arr[num][1]}")
