function solution(array) {
    // 배열의 최대 길이로 초기화된 array2 배열 생성
    // 각 인덱스는 해당 숫자의 빈도수를 나타냄
    var array2 = new Array(1001).fill(0);
    
    // 배열을 순회하며 각 숫자의 빈도수를 array2에 기록
    for(var i = 0; i < array.length; i++) {
        array2[array[i]]++;
    }
    
    // 최대 빈도수와 해당 숫자를 저장하는 변수 초기화
    var max = 0;
    var max_i = 0;
    
    // array2를 순회하며 최빈값을 찾음
    for(var i = 0; i < array2.length; i++) {
        if(array2[i] > max) {
            max = array2[i];
            max_i = i;
        }
        // 최빈값이 중복되는 경우 max_i를 -1로 설정
        else if(array2[i] !== 0 && array2[i] === max) {
            max_i = -1;
        }
    }
    
    // 중복된 최빈값이 있는 경우 -1 반환, 아닌 경우 최빈값 반환
    if(max_i === -1) {
        return -1;
    }
    else {
        return max_i;
    }
}