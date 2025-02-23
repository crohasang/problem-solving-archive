function solution(array, height) {
    let count = 0;
    
    array.forEach((element) => {
        if(element > height) {
            count++;
        }
    })
    
    return count;
}