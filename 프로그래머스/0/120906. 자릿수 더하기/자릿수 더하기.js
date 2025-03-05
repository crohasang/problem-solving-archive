function solution(n) {
    let answer = 0;
    
    const n_string = n.toString();
    
    for(let i = 0; i < n_string.length; i++) {
        console.log(n_string[i]);
        answer += parseInt(n_string[i]);
    }
    
    return answer;
}