# Day 18 Problem No 39

# 643. Maximum Average Subarray I => https://leetcode.com/problems/maximum-average-subarray-i/description/?envType=study-plan-v2&envId=leetcode-75

class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        currS = sum(nums[:k])
        maxS = currS

        for i in range(k,len(nums)):
            currS += nums[i] - nums[i-k]
            maxS = max(maxS,currS)
        return maxS/k
         
        