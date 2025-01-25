function solution(citations) {
    const answerArray = [];
    
    citations.sort((a,b) => b-a)
        
                    
        for(let i = 0; i <= citations[0]; i++) {
            let count = 0;

            citations.forEach((element) => {
                if(element >= i) {
                    count++;
                }
            })
            
            if(count >= i) {
                answerArray.push(i);
            }
    }
        
    return Math.max(...answerArray);
}