function solution(s){
    
    
    let count = 0;
    
    for(let index = 0; index < s.length; index++) {
        if(s[index] === '(') {
            count++;
        }
        else if (s[index] === ')') {
            count--;
        }
        
        if(count < 0) {
            return false;
        }
        
    }
    
    if(count === 0) {
        return true;
    }
    else {
        return false;
    }
}