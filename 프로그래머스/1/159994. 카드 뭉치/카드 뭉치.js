function solution(cards1, cards2, goal) {
    let cards1_index = 0;
    let cards2_index = 0;
    
    for (let i = 0; i < goal.length; i++) {
        if (cards1[cards1_index] === goal[i]) {
            cards1_index++;
        }
        else if (cards2[cards2_index] === goal[i]) {
            cards2_index++;
        }
        else {
            return 'No';
        }
    }
    
    return 'Yes';
}