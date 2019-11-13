# https://leetcode.com/problems/two-sum/

def two_sum(nums, target):
    hash_map = {}
    for i, j in enumerate(nums):
        if hash_map.get(j) == None:
            compliment = target - j
            hash_map[compliment] = i
        else:
            return [hash_map[j], i] 

print(two_sum([2, 7, 11, 15], 9))