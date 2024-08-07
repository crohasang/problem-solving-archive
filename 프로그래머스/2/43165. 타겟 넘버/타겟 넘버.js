let answer = 0;

function solution(numbers, target) {
    const length = numbers.length;
    
    recursive(0, 0, numbers, length, target);
    
    return answer;
    
}


// 재귀함수
function recursive(count, sum, arr, length, target) {
    
    if(count === length) {
        if (target === sum) {
            answer++;
        }
        return;
    }
    
    recursive(count + 1, sum + arr[count], arr, length, target);
    recursive(count + 1, sum - arr[count], arr, length, target);
}