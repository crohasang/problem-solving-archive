T = int(input())
answer = ''
# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
for test_case in range(1, T + 1):
    # ///////////////////////////////////////////////////////////////////////////////////
    count = 0
    test_case_str = str(test_case)

    for i in range(len(test_case_str)):
        if (test_case_str[i]) == '3' or (test_case_str[i]) == '6' or (test_case_str[i]) == '9':
            count = count + 1

        
    if count == 0:
        answer += f'{test_case} '
    else:
        answer += f'{count *  "-"} '

    
print(answer)
    # ///////////////////////////////////////////////////////////////////////////////////
