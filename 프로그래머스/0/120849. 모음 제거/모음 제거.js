function solution(my_string) {
    let answer = ''
    
    let array = [...my_string];
        
    array.forEach((element) => {
        if(element !== 'a' && 
           element !== 'e' && 
           element !== 'i' && 
           element !== 'o' && 
           element !== 'u') {
            answer += element;
        }
    })
    
    return answer;
}