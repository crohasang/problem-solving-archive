function solution(num_list) {
    const sortedList = num_list.sort((a, b) => a - b);
    
    const answer = [];
    
    for(let i = 0; i < 5; i++) {
        answer.push(sortedList[i]);
    }

    return answer;
    
}