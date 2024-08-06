function solution(n, lost, reserve) {
    // 배열 정렬
    lost.sort((a, b) => a - b);
    reserve.sort((a, b) => a - b);
    

    let lost_cnt = lost.length; 
    
    for (let i = lost.length - 1; i >= 0; i--) {
        
        let l = lost[i];
        var rightIndex = reserve.indexOf(l);
        if (rightIndex !== -1) {
            reserve.splice(rightIndex, 1);
            lost.splice(i, 1);
            lost_cnt--;
        }
    }
    
    for (let l of lost) {
        var minusIndex = reserve.indexOf(l - 1);
        var plusIndex = reserve.indexOf(l + 1);
        
        
        if (minusIndex !== -1) {
            console.log("minus");
            reserve.splice(minusIndex, 1);
            lost_cnt--;
        } else if (plusIndex !== -1) {
            console.log("plus");
            reserve.splice(plusIndex, 1);
            lost_cnt--;
        }
    }
    
    return n - lost_cnt;
}