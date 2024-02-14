function solution(numbers, direction) {
    let answer = [];
    
    if(direction === "left") {
        let idx = 0;
        
        // numbers의 두번째 값부터 answer에 넣어준다.
        for(let i = 1; i < numbers.length; i++){
            answer[idx++] = numbers[i];
        }
        
        // 마지막으로 numbers 맨 처음 값을 answer에 넣어준다. 
        answer[idx] = numbers[0];
        
    }
    else if(direction === "right") {
        let idx2 = 0;
        
        // 맨 처음으로 numbers 맨 마지막 값을 answer에 넣어준다.
        answer[idx2++] = numbers[numbers.length -1];
        
        
        // numbers의 두번째 값부터 answer에 넣어준다.
        for(let i = 0; i < numbers.length - 1; i++) {
            answer[idx2++] = numbers[i];
        }
        
        
    }
    
    return answer;
}