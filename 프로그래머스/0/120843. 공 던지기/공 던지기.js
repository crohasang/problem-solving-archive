function solution(numbers, k) {
    // now = 배열을 무한히 옆으로 늘려놨을 때, 몇번째 인덱스에 있는지 
    let now = 2 * (k-1);
    
    // numbers[now를 배열의 길이로 나눈 나머지]가 정답
    return numbers[now % numbers.length];
}