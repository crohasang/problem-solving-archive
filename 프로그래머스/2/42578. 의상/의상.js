function solution(clothes) {
    
    const map = new Map();
    const set = new Set();
    
    for(let i = 0; i < clothes.length; i++) {
        set.add(clothes[i][1]);
    }
        
    set.forEach((element) => {
        map.set(element, 0);
    })
        
    for(let i = 0; i < clothes.length; i++) {
        map.set(clothes[i][1], map.get(clothes[i][1]) + 1);
    }
    
    let answer = 1;
    
    
    map.forEach((key, value) => {
        answer *= (key + 1);
    })
    
    return answer - 1;
    
}