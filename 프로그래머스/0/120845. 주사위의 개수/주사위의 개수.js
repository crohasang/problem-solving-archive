function solution(box, n) {
    let answer = 0;
    
    box[0] = Math.floor(box[0] / n);
    box[1] = Math.floor(box[1] / n);
    box[2] = Math.floor(box[2] / n);
    
    return box[0] * box[1] * box[2];
}