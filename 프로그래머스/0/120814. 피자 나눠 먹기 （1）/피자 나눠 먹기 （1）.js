function solution(n) {
    
    // n을 7로 나눈 나머지를 integerCheck 변수에 저장
    let integerCheck = n % 7;
    
    let answer = 0;
    
    // integerCheck가 0이라면 피자는 n / 7개가 필요하다.
    // 예시: 피자를 나눠먹을 사람이 21명이면 피자는 3판이 필요하다.
    if (integerCheck === 0) {
        answer = n / 7;
    }    
    
    // integerCheck가 0이 아니라면 피자는 n / 7의 몫 + 1개가 필요하다.
    // 예시: 피자를 나눠먹을 사람이 22명이면 피자는 3판 + 1판이 필요하다.
    else {
        answer = Math.floor(n / 7) + 1;
    }
    
    return answer;
}