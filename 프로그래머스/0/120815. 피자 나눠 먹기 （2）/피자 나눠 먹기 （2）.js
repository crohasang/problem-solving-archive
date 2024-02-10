function solution(n) {
    
    // 최대공약수 구하기
    let gcd = (a, b) => (b === 0 ? a : gcd(b, a % b));
    
    // 최소공배수: 두 수를 곱한 값을 최대공약수로 나눈 수
    let lcm = n * 6 / gcd(n, 6);
    
    // 정답: 최소공배수를 6으로 나눈 수
    let answer = lcm / 6;
    
    return answer;
}