// 앞자리 수로 비교한다.
// 앞자리 수가 같으면 그 다음 자리 수로 비교한다.
// 고민할 점: 두 자리 수와 세 자리 수가 있으면, 어떻게 비교를 할 것인가?
// 예시: 34와 341
// 그러면 둘의 index를 비교해서, 마지막 자리가 큰 것을 더 큰 걸로 보면 되지 않을까
function sortNumbers(a, b) {
    
    a = String(a);
    b = String(b);
    
    const first_a = a + b;
    const first_b = b + a;
    
    if (first_a > first_b) {
        return 1;
    }
    else {
        return -1;
    }
}

function solution(numbers) {
    
    let answerArray = numbers.sort((a,b) => sortNumbers(a,b));
    answerArray = answerArray.reverse();
        
    let answer = '';
    
    answerArray.forEach((e) => {
        answer += e;
    })
    
    if(Number(answer) === 0) {
        return '0';
    }
    
    return answer;
}

