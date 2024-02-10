function solution(numbers) {
    
    let sum = 0;
    
    // 배열을 순회하면서 배열값을 sum에 더해준다.
    for(let i = 0; i < numbers.length; i++) {
       sum += numbers[i];
        
    }
    
    // sum을 배열의 길이에 나눠준 값이 평균이다.
    let answer = sum / numbers.length;
    
    return answer;
}