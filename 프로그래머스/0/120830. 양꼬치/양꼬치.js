function solution(n, k) {
    let answer = 0;
    
    // answer에 양꼬치 개수 * 12000을 더해준다.
    answer += n * 12000;
    
    // 사람들이 몇 인분을 먹었는지 -> 양꼬치의 개수에서 10을 나눈 몫
    let people_cnt = parseInt(n / 10);
    
    // answer에 음료수 개수에서 사람들이 몇 인분 먹었는지를 빼고 2000을 곱해준다.
    answer += (k-people_cnt) * 2000;
    
    return answer;
    
}