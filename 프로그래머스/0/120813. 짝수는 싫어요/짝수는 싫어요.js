function solution(n) {
    // 반환할 배열 초기화
    var answer = [];
    // 배열에 값을 채울 인덱스 초기화
    var array_num = 0;
    
    // 1부터 n까지의 홀수를 배열에 저장
    for(var i = 1; i <= n; i = i + 2) {
        answer[array_num++] = i;
    }

    // 결과 배열 반환
    return answer;
}