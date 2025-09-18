function solution(n, times) {
    // 이분탐색 활용
    const timesSorted = times.sort((a, b) => a - b);
    let left = 1;
    let right = n * timesSorted[timesSorted.length - 1];
    
    while(left <= right) {
        let mid = Math.floor((left + right) / 2);
        let sum = times.reduce((acc, cur) => acc + Math.floor(mid / cur), 0);
        
        if (sum >= n) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    
    return left;
    
}