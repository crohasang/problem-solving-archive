function solution(num_list, n) {
    let answer = [];
    
    for(let i = 0; i< num_list.length;) {
        let arr = [];
        
        
        // arr에 n의 크기만큼 배열값을 넣어준다.
        for(let j = 0; j < n; j++) {
            arr[j] = num_list[i];
            i++;
        }
        
        // answer 배열에 arr 배열을 push한다.
        answer.push(arr);
    }
    
    return answer;
}