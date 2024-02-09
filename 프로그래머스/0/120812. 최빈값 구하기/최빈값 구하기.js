function solution(array) {
    var array2 = new Array(1001).fill(0);
    
    for(var i = 0; i < array.length; i++) {
        array2[array[i]]++;
    }
    
    var max = 0;
    var max_i = 0;
    
    for(var i = 0; i < array2.length; i++) {
        if(array2[i] > max) {
            max = array2[i];
            max_i = i;
        }
        else if(array2[i] !== 0 && array2[i] === max) {
            max_i = -1;
        }
    }
    
    if(max_i === -1) {
        return -1;
    }
    else {
        var answer = max_i;
        return answer;
    }
    
}