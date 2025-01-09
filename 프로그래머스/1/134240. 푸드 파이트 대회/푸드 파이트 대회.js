function solution(food) {
    let answer = ['0'];
    
    for(let index = food.length - 1; index > 0; index--) {
        let count = food[index];
        const indexString = index.toString();
        
        if(count % 2 !== 0) {
            count = count - 1;
        }
        
        
        if(count === 1) {
            break;
        }
        
        while(true) {  
            
            if(count <= 0) {
                break;
            }
            
            answer.push(indexString);
            answer.unshift(indexString);
            count = count - 2;
            
            
        }
    }
    
    let answerString = '';
    
    answer.forEach((element) => (
        answerString += element
    ))
    
    return answerString;
}