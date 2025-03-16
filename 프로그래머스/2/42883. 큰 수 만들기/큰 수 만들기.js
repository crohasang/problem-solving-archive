function solution(number, k) {
    let stack = [];
    
    for(let i = 0; i < number.length; i++) {
        
        while(stack.length !== 0 && k > 0 && stack[stack.length - 1] < number[i]) {
            stack.pop();
            k--;
        }
        
        stack.push(number[i]);
    }
    
    if (k !== 0) {
       stack.splice(stack.length - k, k); 
    }
    
    return stack.join('');
    
}
