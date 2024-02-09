function solution(n) {
    var answer = [];
    var array_num = 0;
    
    for(var i = 1; i <= n; i = i + 2) {
        answer[array_num++] = i;
    }

    return answer;
}