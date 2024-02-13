function solution(numbers, num1, num2) {
    let answer = [];
    let cnt = 0;
    
    // num1부터 num2까지 numbers 배열의 값을 answer 배열에 넣어준다.
    for(let i = num1; i <= num2; i++) {
        answer[cnt] = numbers[i];
        cnt++;
    }
    
    return answer;
}