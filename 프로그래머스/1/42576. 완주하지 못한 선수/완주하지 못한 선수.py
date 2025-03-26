def solution(participant, completion):
    
    dict = {}
    
    for person in participant:
        if person in dict:
            dict[person] += 1
        else:
            dict[person] = 1
    
    
    for person in completion:
        dict[person] -= 1
        
    for person, count in dict.items():
        if count > 0 :
            return person