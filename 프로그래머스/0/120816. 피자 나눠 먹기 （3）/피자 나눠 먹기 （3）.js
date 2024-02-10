function solution(slice, n) {
    
    // isInteger = n을 slice로 나누었을 때 나머지
    let isInteger = n % slice;
    let answer = 0;
    
    // n을 slice로 나누었을 때 나머지가 0이면 정답은 n / slice이다.
    if(isInteger === 0) {
        answer = n / slice; 
    }
    
    // 나머지가 0이 아니라면 n을 slice로 나눈 몫에 1을 더해준 값이 정답이다.
    else {
        answer = parseInt(n / slice) + 1;
    }
    
    return answer;
}