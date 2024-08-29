function solution(brown, yellow) {
    
    // 양 변의 합
    let sideSum = (brown + 4) / 2;
    
    for(let verticalTemp = 1; verticalTemp <= sideSum / 2; verticalTemp++ ) {
        
        // 가로 길이
        let horizontalTemp = sideSum - verticalTemp;
        
        if(yellow === (verticalTemp - 2) * (horizontalTemp - 2)) {
            return [horizontalTemp, verticalTemp];
        }
    }
    
    return null;
}