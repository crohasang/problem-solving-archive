function solution(num_list, n) {
    let answer = [];
    
    for(let i = 0; i< num_list.length;) {
        let arr = [];
        
        
        for(let j = 0; j < n; j++) {
            arr[j] = num_list[i];
            i++;
        }
        
        answer.push(arr);
    }
    
    return answer;
}