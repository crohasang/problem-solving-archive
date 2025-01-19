function solution(n) {
    for(let i = 1; i <= n-1; i++) {
        if (n % i === 1) {
            return i;
        }
    }
}