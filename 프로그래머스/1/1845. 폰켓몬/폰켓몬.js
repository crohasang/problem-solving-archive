function solution(nums) {
    
    var answer = 0;
    
    // 빈 배열 선언
    var arr = [];
    
    // nums를 순회하면서 지금까지 나오지 않았던 숫자가 나오면 answer에 +1을 해줌
    for (var i = 0; i < nums.length; i++) {
        
        // 만약 nums[i]가 arr에 없다면
        if (!arr.includes(nums[i])) {
           
            // arr에 해당 값을 넣어줌
            arr.push(nums[i]);
            
            // answer에 +1 더해줌
            answer++;
            
        }
    }
    
    if(answer > nums.length / 2) {
        return nums.length / 2;
    }
    else {
        return answer;
    }
}