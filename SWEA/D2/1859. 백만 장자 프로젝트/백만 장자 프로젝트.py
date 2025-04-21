T = int(input())

# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
for test_case in range(1, T + 1):
    # ///////////////////////////////////////////////////////////////////////////////////
    number = int(input())
    arr = list(map(int, input().split()))

    max_price = 0
    profit = 0

    for price in reversed(arr):
        if max_price > price:
            profit = profit + (max_price - price)
        else:
            max_price = price

    print(f"#{test_case} {profit}") 
