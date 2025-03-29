import heapq

def solution(scoville, K):
    heapq.heapify(scoville)
    
    count = 0
    while not (check_all_greater(scoville, K)):
        
        if (len(scoville) <= 1):
            return -1
        
        smallest = heapq.heappop(scoville)
        second_smallest = heapq.heappop(scoville)
        
        mixed = smallest + second_smallest * 2
        heapq.heappush(scoville, mixed)
        count += 1
    
    return count
    

def check_all_greater(numbers, threshold):
    return all(num >= threshold for num in numbers)