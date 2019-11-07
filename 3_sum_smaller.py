# https://leetcode.com/problems/3sum-smaller/

# Given an array of n integers nums and a target, 
# find the number of index triplets i, j, k with 0 <= i < j < k < n 
# that satisfy the condition nums[i] + nums[j] + nums[k] < target.

def two_sum(nums, left_index, target):
    right_index = len(nums) - 1
    left_index = left_index
    total = 0

    while(left_index < right_index):
        if nums[left_index] + nums[right_index] < target:
            total += right_index - left_index
            left_index += 1
        else:
            right_index -= 1
    return total

def three_sum(nums, target):
    total = 0
    for i in range(len(nums)-2):
        total += two_sum(nums, i+1, target - nums[i])
    return total

print(three_sum([-2,0,1,3], 2))



