function solution(rsp) {
    // 가위 = 2, 바위 = 0, 보 = 5
    
    let answer = '';
    
    for(let i = 0; i < rsp.length; i++) {
        
        // 바위일 때
        if(rsp[i] === '0'){
            answer += '5';
        }
        
        // 가위일 때
        else if(rsp[i] === '2'){
            answer += '0';
        }
        
        // 보일 때
        else if(rsp[i] === '5'){
            answer += '2';
        }
        
        
    }
    
    return answer;
}