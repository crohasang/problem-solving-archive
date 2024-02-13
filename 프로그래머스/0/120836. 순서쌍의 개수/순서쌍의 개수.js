function solution(n) {
    let cnt = 0;
    
    // n을 어떤 수로 나눴을 때 나머지가 0이면 카운트를 1씩 더해준다.
    for(let i = 1; i <= n; i++) {
        if(n % i == 0){
            cnt++;
        }
    }
    
    return cnt;
}