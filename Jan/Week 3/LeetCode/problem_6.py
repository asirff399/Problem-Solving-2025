# Day 20 Problem No 43

# 724. Find Pivot Index => https://leetcode.com/problems/find-pivot-index/description/?envType=study-plan-v2&envId=leetcode-75

class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        total = sum(nums)
        l_sum = 0

        for i in range(len(nums)):
            if l_sum == total - l_sum - nums[i]:
                return i
            else:
                l_sum += nums[i]
        return -1