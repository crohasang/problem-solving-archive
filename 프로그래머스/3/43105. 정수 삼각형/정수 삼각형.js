function solution(triangle) {
    
    const height = triangle.length;
        
    // 삼각형에 맞게 빈 배열 생성
    const dp = Array.from({length: height}, (_, i) => Array.from({length: i + 1}, () => 0));
        
    // 맨 위의 값 넣기
    dp[0][0] = triangle[0][0];
    
    for(let i = 1; i < height; i++) {
    
        for (let j = 0; j < triangle[i].length; j++) {
            if(j === 0) {
                dp[i][j] = dp[i-1][j] + triangle[i][j];
            }
            else if (j === triangle[i].length - 1) {
                dp[i][dp[i].length - 1] = dp[i-1][dp[i-1].length - 1] + triangle[i][triangle[i].length - 1];
            }
            
            else {                
                dp[i][j] = Math.max(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
            }
        
        
        }
    }
    
    return Math.max(...dp[height - 1]);
}

