# Day 16 Problem No 36

# 283. Move Zeroes => https://leetcode.com/problems/move-zeroes/description/?envType=study-plan-v2&envId=leetcode-75

class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        idx = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                nums[idx] = nums[i]
                idx+=1
                
        for i in range(idx, len(nums)):
            nums[i] = 0
