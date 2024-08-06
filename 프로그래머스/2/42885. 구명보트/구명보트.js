function solution(people, limit) {
    var sortedPeople = people.sort((a,b) => a-b);
    let cnt = 0;
    
    var i = 0;
    var j = sortedPeople.length - 1;
    
    while(i <= j) {
        if(sortedPeople[i] + sortedPeople[j] <= limit) {
            i++;
            j--;
        }
        else {
            j--;
        }
        cnt++;
    }
    
    return cnt;
    
    
}