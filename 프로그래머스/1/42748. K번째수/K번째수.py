def solution(array, commands):
    
    answer = []
    
    for command in commands:
        start = command[0]
        end = command[1]
        order = command[2]
        
        slicedArray = array[start-1:end]
        slicedArray.sort()
        answer.append(slicedArray[order-1])
    
    return answer
        
        
        