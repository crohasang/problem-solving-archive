// 최대공약수를 구하는 함수(유클리드 호제법 사용)
function gcd(a, b) {
    return b === 0 ? a : gcd(b, a % b);
}

function solution(numer1, denom1, numer2, denom2) {
    
    // 분모끼리 곱한다.
    let denom_times = denom1 * denom2;
    
    // 분자1 * 분모2
    let numer_temp1 = numer1 * denom2;
    
    // 분자2 * 분모1
    let numer_temp2 = numer2 * denom1;
    
    // 새로 만들어진 분자들을 더해준다.
    let numer_sum = numer_temp1 + numer_temp2;

    
    // 최대공약수를 구해준다.
    let gcd_num = gcd(numer_sum, denom_times);
    
    let answer = [];
    answer[0] = numer_sum / gcd_num;
    answer[1] = denom_times / gcd_num;
    
    return answer;
}