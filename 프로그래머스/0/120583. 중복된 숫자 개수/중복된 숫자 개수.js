function solution(array, n) {
    let count = 0;
    
    array.forEach((element) => {
        if(element === n) {
            count++;
        }
    })
    
    return count;
}