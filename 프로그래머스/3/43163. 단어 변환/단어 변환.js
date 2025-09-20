function solution(begin, target, words) {
    if(!words.includes(target)) {
        return 0;
    }
    
    let answer = 0;
    const visited = new Set();
    let q = [begin];    
    
    while(q.length) {
        let temp = [];
        
        for (const word of q) {
            visited.add(word);
                    
            if(word === target) {
                return answer;
            }
            
            
            for (let i = 0; i < word.length; i++) {
                const letter = slicedWord(word, i);
                const matched = words.filter((v, j) => !visited.has(v) && slicedWord(v,i) === letter);
                temp.push(...matched);
            }
        }
        
        answer++;
        q = temp;
    }
   
    function slicedWord(word, i) {
        const wordToArray = word.split('');
        wordToArray.splice(i, 1);
        return wordToArray.join('');   
    }
    
    return answer;
}