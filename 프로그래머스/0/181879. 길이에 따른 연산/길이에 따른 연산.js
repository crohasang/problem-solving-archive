function solution(num_list) {
    
    if(num_list.length >= 11){
        let answer = 0;
        num_list.forEach((element) => {
            answer += element;
        })
        
        return answer;
    }
    
    else {
        let answer = 1;
        num_list.forEach((element) => {
            answer *= element;
        })
        
        return answer;
    }
    
}