function solution(sizes) {
    var arr1 = [];
    var arr2 = [];
    
    for(let card of sizes) {
        if(card[0] < card[1]) {
            card = [card[1], card[0]]
        }
        
        arr1.push(card[0]);
        arr2.push(card[1]);
    }
    const arr1Max = Math.max(...arr1);
    const arr2Max = Math.max(...arr2);

    console.log("arr1Max: " + arr1Max);
    console.log("arr2Max: " + arr2Max);
    return arr1Max * arr2Max;
    
    
}