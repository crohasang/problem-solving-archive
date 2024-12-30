function solution(n, times) {
    const timesLength = times.length;
        
    const sortedTimes = times.sort((a, b) => a - b);

    // 이분탐색을 통해 모든 사람이 심사를 받는데 걸리는 최소한의 시간을 찾자
    // left, right 초기값 설정
    // 여기서 right는 가장 오래걸리는 시간
    
    let left = 1;
    let right = n * sortedTimes[timesLength - 1];
    let mid = Math.floor((left + right) / 2);

    
    // left가 right보다 작거나 같을 동안에는 무한반복
    while(left <= right) {
        mid = Math.floor((left + right) / 2);

        
        // 사람의 수 people 선언
        let people = 0;
        
        // sortedTimes을 순회하면서 mid에 sortedTimes의 요소를 나눈 값을 people에 더해준다
        // mid에 sortedTimes의 요소를 나눈 값 -> mid 동안 해당 time이 심사한 사람들의 수
        for(let time = 0; time < timesLength; time++) {
            people += Math.floor(mid / sortedTimes[time]); 
        }
        
        // 만약 같거나 많은 사람들을 심사했다면
        if(people >= n) {
            right = mid - 1;
            
        }
        // 만약 더 적은 사람들을 심사했다면
        else {
            left = mid + 1;
        }
    }
    
    return left;
    

}