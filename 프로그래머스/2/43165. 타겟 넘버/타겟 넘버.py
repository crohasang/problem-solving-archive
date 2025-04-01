def solution(numbers, target):
    answer = 0
    bfs = [0]
    
    for number in numbers:
        temp = []
        
        for element in bfs:
            temp.append(element + number)
            temp.append(element - number)
        
        bfs = temp
    
    for element in bfs:
        if element == target:
            answer += 1
            
    
    return answer