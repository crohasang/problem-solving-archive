function solution(array, commands) {
    var answer = [];
    
    for(let arr of commands) {
        var newArr = [];
        
        for(let i = arr[0]; i <= arr[1]; i++) {
            newArr.push(array[i-1]);
        }
        
        newArr.sort((a,b) => a-b);
    
        answer.push(newArr[arr[2] - 1]);
    }
    
    return answer;
    
    return answer;
}