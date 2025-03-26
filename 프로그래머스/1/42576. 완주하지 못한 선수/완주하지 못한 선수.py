from collections import Counter

def solution(participant, completion):
    participant_counter = Counter(participant)
    completion_counter = Counter(completion)
    
    result = participant_counter - completion_counter
    
    return list(result.keys())[0]
