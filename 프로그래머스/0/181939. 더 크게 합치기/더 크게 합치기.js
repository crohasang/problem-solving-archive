function solution(a, b) {
    let answer1 = ''
    let answer2 = ''
    
    answer1 += a;
    answer1 += b;
    
    answer2 += b;
    answer2 += a;
    
    if (Number(answer1) >= Number(answer2)) {
        return Number(answer1);
    }
    
    else {
        return Number(answer2);
    }
}