function solution(price) {
    
    // 10만원 이상 사면 5% 할인
    if(price >= 100000 && price < 300000) {
       return Math.floor(price * 0.95);
    }
    
    // 30만원 이상 사면 10% 할인
    else if(price >= 300000 && price < 500000) {
        return Math.floor(price * 0.9);
    }
    
    // 50만원 이상 사면 20% 할인
    else if(price >= 500000) {
        return Math.floor(price * 0.8);
    }
    
    // 할인 미적용
    else {
        return price;
    }
}