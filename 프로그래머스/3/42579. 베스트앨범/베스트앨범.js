function solution(genres, plays) {
    const answer = [];   
    const map = new Map();
    
    // 각 장르별 plays의 합을 value에 더해줌
    for(let i = 0; i < genres.length; i++) {
        map.set(genres[i], map.get(genres[i]) + plays[i] || plays[i])
    }
    
    // 정렬을 위해 map을 배열로 바꿈
    const array = [...map];
    
    // plays의 총합을 기준으로 장르를 내림차순 정렬
    const sortedMap = new Map(array.sort((a, b) => b[1] - a[1]));
        
    // 장르별로 순회를 돌며 고유번호, plays로 Map 생성
    sortedMap.forEach((value, key) => {
        const map2 = new Map();
        
        for(let i = 0; i < genres.length; i++) {
            
            if(genres[i] === key) {
                map2.set(i, plays[i]);
            }
        }
        
        const array2 = [...map2];
        
        array2.sort((a, b) => {
            
            // 만약 plays가 다르면 plays가 더 큰 요소가 앞으로 오게 정렬
            if(a[0] !== b[0]) {
                return b[1] - a[1];
            }
            
            // 만약 plays가 같으면 고유번호가 낮은 요소가 먼저 앞으로 오게 정렬
            return a[0] - b[0];
        });
        
        let count = 0;
        
        for(let i = 0; i < array2.length; i++) {
            
            if(count === 2){
                break;
            }
    
            answer.push(array2[i][0]);
            count++;
        }
    })
    
    return answer;
}