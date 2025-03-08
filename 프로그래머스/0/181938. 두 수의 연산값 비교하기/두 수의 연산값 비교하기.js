function solution(a, b) {
    const a_string = a.toString();
    const b_string = b.toString();
    
    const ab_string = a_string + b_string;
    const ab_number = parseInt(ab_string);
    
    const ab2 = 2 * a * b;
    
    const answer = ab_number >= ab2 ? ab_number : ab2;
    
    return answer;
}