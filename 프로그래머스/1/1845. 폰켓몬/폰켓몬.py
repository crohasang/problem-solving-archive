def solution(nums):
    n_2 = len(nums) / 2
    
    nums_set = set(nums)
    nums_set_length = len(nums_set)
    
    if nums_set_length >= n_2:
        return n_2
    else:
        return nums_set_length
    
    