function solution(progresses, speeds) {
    // 새로운 배열 선언 
    var days = [];
    var answer = [];
    
    // progresses를 순회하면서 며칠 뒤에 개발이 끝나는지를 각각 구한다.
    // 구한 값은 days 배열에 push한다.
    for(var i = 0; i < progresses.length; i++) {
        var left_progresses = 100 - progresses[i];
        days.push(Math.ceil(left_progresses / speeds[i]));
    }
    
    // 배열 days를 순회하면서
    // 현재 배열값(standard)보다 뒤에 있는 값들이 작거나 같으면 cnt를 더해준다.
    // 더 큰 값이 나오면 순회를 멈추고 카운트 된 cnt를 answer에 push해준다.
    // 그리고 answer 배열을 return한다.
    for(var i = 0; i < days.length;) {
        let cnt = 1;
        let standard = days[i];
        i++;
        while(standard >= days[i]) {
            cnt++;
            i++;
        }
        answer.push(cnt);
    }
    
    return answer;
    
    
}
