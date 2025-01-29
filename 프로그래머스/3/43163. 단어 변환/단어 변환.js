function solution(begin, target, words) {
    let answer = 0;
    let visitedArray = Array.from({length: words.length}, () => false);
    
    function dfs(cur, target, step) {
        if(cur === target) {
            if(answer === 0 || answer > step) {
                answer = step;
            }
            return;
        }
        
        for(let i = 0; i < words.length; i++) {
            if(visitedArray[i]) {
                continue;
            }
            
            let differentCount = 0;
            
            for(let j = 0; j < words[i].length; j++) {
                if(words[i][j] !== cur[j]) {
                    differentCount += 1;
                }
            }
            
            if (differentCount === 1) {
                visitedArray[i] = true;
                dfs(words[i], target, step + 1);
                visitedArray[i] = false;
            }
        }
    }
    
    dfs(begin, target, 0);
    return answer;
}