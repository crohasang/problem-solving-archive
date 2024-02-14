function solution(letter) {
    let morse = {a: ".-",
                 b:"-...",
                 c:"-.-.",
                 d:"-..",
                 e:".",
                 f:"..-.",
                 g:"--.",
                 h:"....",
                 i:"..",
                 j:".---",
                 k:"-.-",
                 l:".-..",
                 m:"--",
                 n:"-.",
                 o:"---",
                 p:".--.",
                 q:"--.-",
                 r:".-.",
                 s:"...",
                 t:"-",
                 u:"..-",
                 v:"...-",
                 w:".--",
                 x:"-..-",
                 y:"-.--",
                 z:"--.."}
    
    // 공백을 기준으로 나눠서 arr 배열에 저장
    let arr = letter.split(' ');
    
    // answer 문자열 생성
    let answer = '';
    
    // arr[i]와 일치하는 morse 배열의 value가 있는지 확인하고
    // 그 value의 key 값을 answer 문자열에 더해준다.
    for(let i = 0; i < arr.length; i++) {
        answer += Object.keys(morse).find(key => morse[key] === arr[i]);
    }
    
    return answer;
}