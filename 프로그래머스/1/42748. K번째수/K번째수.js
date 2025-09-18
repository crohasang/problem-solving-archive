function solution(array, commands) {
    let answer = [];
    
    for (let i = 0; i < commands.length; i++) {
        const sliceFrom = commands[i][0];
        const sliceTo = commands[i][1];
        const sortedArrayIndex = commands[i][2];
        
        const slicedArray = array.slice(sliceFrom - 1, sliceTo);
        const sortedArray = slicedArray.sort((a,b) => a - b);
        answer.push(sortedArray[sortedArrayIndex - 1]);
    }
    
    return answer;
}