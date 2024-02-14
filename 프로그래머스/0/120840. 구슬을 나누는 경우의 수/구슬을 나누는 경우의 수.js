function factorial(n) {
    if (n <= 1) {
        return 1;
    }
    
    let result = 1;
    
    for(let i = 1; i <= n; i++) {
        result *= i;
    }
    
    return result;
}

function solution(balls, share) {
    // balls: 머쓱이가 갖고 있는 구슬의 개수
    // share: 친구들에게 나누어줄 구술 개수
    
     if (balls < share) {
        return 0;
    }

    
    return Math.round(factorial(balls) / ( factorial(balls-share) * factorial(share)) );
}