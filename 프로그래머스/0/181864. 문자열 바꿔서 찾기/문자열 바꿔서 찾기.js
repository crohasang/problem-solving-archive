function solution(myString, pat) {
    let reversed_myString = '';
    
    for(let i = 0; i < myString.length; i++) {
        if(myString[i] === 'A') {
            reversed_myString += 'B';
        }
        else {
            reversed_myString += 'A';
        }
    }
    
    if(reversed_myString.includes(pat)) {
        return 1;
    }
    else {
        return 0;
    }
    
    
}