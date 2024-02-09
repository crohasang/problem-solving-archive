function solution(array) {
    let sortedArray = array.slice().sort((a, b) => a - b);
    let answer = sortedArray[Math.floor(array.length / 2)];
    return answer;
}