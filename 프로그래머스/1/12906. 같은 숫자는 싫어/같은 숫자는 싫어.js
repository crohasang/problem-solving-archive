function solution(arr)
{
    // 빈 배열 선언
    var answer = [];
    
    // arr을 순회하면서 answer의 top가 arr[i]가 아니라면 arr[i]를 answer에 push
    for(var i = 0; i < arr.length; i++) {
        if(answer[answer.length - 1] !== arr[i]) {
            answer.push(arr[i])
        }
    }
    
    return answer;
}