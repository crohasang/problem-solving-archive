function solution(dot) {
    
    
    const x = dot[0] > 0 ? 1 : -1;
    const y = dot[1] > 0 ? 1 : -1;
    
    if(x === 1 ){
        if(y === 1) {
            return 1;
        }
        else {
            return 4;
        }
    }
    else {
        if(y === 1) {
            return 2;
        }
        else {
            return 3;
        }
    }
}