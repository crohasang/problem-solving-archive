function solution(my_string) {
    
    let answer_string = '';
    
    // my_string의 끝에 있는 문자부터 answer_string에 넣어주기
    for(var i = my_string.length - 1; i >= 0; i--) {
        answer_string += my_string[i];
    }
    
    return answer_string;
}