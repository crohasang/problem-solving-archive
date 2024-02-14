function solution(hp) {
    // 장군개미 = 5, 병정개미 = 3, 일개미 = 1
    
    // hp가 0이라면
    if(hp === 0) {
        return 0;
    }
    
    // hp가 1이거나 3이라면
    if(hp === 1 || hp === 3) {
        return 1;
    }
    
    // hp가 2이거나 4라면
    if(hp === 2 || hp === 4) {
        return 2;
    }
    
    // hp가 5 이상이라면
    if(hp >= 5) {
        
        // hp를 5로 나눈 몫
        let quotient = parseInt(hp / 5);
        
        // hp를 5로 나눈 나머지
        let remainder = hp % 5;
        
        // 나머지가 0이라면 몫을 return
        if(remainder === 0) {
            return quotient;
        }
        
        // 나머지가 1 혹은 3이라면
        else if(remainder === 1 || remainder === 3) {
            return quotient + 1;
        }
        
        // 나머지가 2 혹은 4라면
        else {
            return quotient + 2;
        }
        
        
    }
    
    
}