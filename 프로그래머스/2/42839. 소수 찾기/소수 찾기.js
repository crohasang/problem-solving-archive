function solution(numbers) {
    let answer = []; 
    let numArr = numbers.split(''); 

    // 소수 판별 함수
    const isPrime = (n) => {
        if (n <= 1) return false; 
        for (let i = 2; i * i <= n; i++) { 
            if (n % i === 0) return false; 
        }
        return true; 
    }
    
    // 순열을 생성하고 소수 여부를 확인하는 함수
    const getPrimePermutations = (arr, currentNumber = '') => {
        
        // 배열이 비어 있을 때 종료
        if (arr.length === 0) return;

        // 배열의 각 숫자를 순회하며 순열 생성
        for (let i = 0; i < arr.length; i++) {
            
            // 현재 숫자 문자열에 arr[i]를 추가
            const newNumber = currentNumber + arr[i]; 

            // 현재 숫자 제외한 나머지로 배열 생성
            const remainingNumbers = arr.filter((_, index) => index !== i); 
            

            // 새로 만든 숫자가 소수이고, answer에 없다면 추가
            if (isPrime(+newNumber) && !answer.includes(+newNumber)) {
                answer.push(+newNumber); // 소수를 answer에 추가
            }

            // 재귀 호출로 남은 숫자들로 추가 순열 생성
            getPrimePermutations(remainingNumbers, newNumber);
        }
    }

    // 순열 생성 및 소수 판별 시작
    getPrimePermutations(numArr);

    return answer.length;
}
