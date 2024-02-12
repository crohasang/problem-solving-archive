function solution(n, k) {
    let answer = 0;
    answer += n * 12000;
    
    let people_cnt = parseInt(n / 10);
    
    answer += (k-people_cnt) * 2000;
    
    return answer;
    
}