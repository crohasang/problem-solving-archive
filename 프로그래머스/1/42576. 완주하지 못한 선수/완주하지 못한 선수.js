function solution(participant, completion) {
    // participant와 completion을 sort한다.
    participant.sort();
    completion.sort();
    
    // 만약 participant[i]와 completion[i]가 다르면 해당 이름을 return한다.
    for(var i = 0; i < participant.length; i++) {
        if(participant[i] !== completion[i]) {
            return participant[i];
        }
    }
}