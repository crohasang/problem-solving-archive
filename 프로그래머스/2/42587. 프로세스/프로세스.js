// queue는 push(삽입)과 shift(추출) 사용

function solution(priorities, location) {
    const array = [];
    
    for(let i = 0; i < priorities.length; i++) {
        const isLocation = i === location ? true : false;
        array.push({priorities: priorities[i], isLocation: isLocation});
    }
    
    let count = 0;
    
    while(true) {
        const shiftedElement = array.shift();
        
        const maxPriorities = Math.max(...array.map(item => item.priorities));
        
        if (shiftedElement.priorities >= maxPriorities) {
            count++;
            
            if (shiftedElement.isLocation) {
                break;
            }
        }
        
        else {
            array.push(shiftedElement);
        }
    }
    
    return count;
}