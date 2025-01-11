function solution(answers) {
    const one_array = [1,2,3,4,5];
    const two_array = [2,1,2,3,2,4,2,5];
    const three_array = [3,3,1,1,2,2,4,4,5,5];
    
    let one_count = 0;
    let two_count = 0;
    let three_count = 0;
    
    answers.forEach((e, i) => {
        if (e === one_array[i % 5]) {
            one_count++;
        }
        if(e === two_array[i % 8]) {
            two_count++;
        }
        if(e === three_array[i % 10]) {
            three_count++;
        }
    })
    
    const people = [
        {name: 1, count: one_count},
        {name: 2, count: two_count},
        {name: 3, count: three_count},
    ]
    
    const sortedPeople = people.sort((a, b) => a.count - b.count);
    const max = people[people.length -1].count;
        
    let answer = [];

    
    people.forEach((e) => {
        if(e.count === max) {
            answer.push(e.name);
        }
    })
    
    // answer = answer.sort((a, b) => a - b);
    
    return answer;
}


