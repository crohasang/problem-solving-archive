function solution(emergency) {
    // 딕셔너리 생성
    let dict = {};
    
    // emergency가 [3, 76, 24]였다면
    // dict[3] = 3;
    // dict[76] = 2;
    // dict[24] = 1; 이된다.
    for (let i = 0; i < emergency.length; i++) {
        dict[emergency[i]] = emergency.length - i;
    }
    
    // 딕셔너리의 key 값을 기준으로 오름차순 정렬
    let sortedDict = Object.fromEntries(
        // 딕셔너리의 키-값 쌍을 배열로 변환하고, 키를 기준으로 오름차순 정렬
        Object.entries(dict).sort(([a], [b]) => a - b)
    );
    
    let answer = [];
    
    // 정렬된 딕셔너리의 값들을 배열에 저장
    let values = Object.values(sortedDict);
    for (let i = 0; i < values.length; i++) {
        answer[i] = values[i];
    }
    
    return answer;
}