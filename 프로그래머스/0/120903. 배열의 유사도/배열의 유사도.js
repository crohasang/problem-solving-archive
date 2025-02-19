function solution(s1, s2) {
    let answer = 0;
    
    s1.forEach((element) => {
        for (let i = 0; i < s2.length; i++) {
            if(s2[i] === element) {
                answer++;
                break;
            }
        }
    })
    
    return answer;
}