# Day 19 Problem No 41

# 1732. Find the Highest Altitude => https://leetcode.com/problems/find-the-highest-altitude/?envType=study-plan-v2&envId=leetcode-75

class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        curr_alt = 0
        high_alt = curr_alt
        for x in gain:
            curr_alt+=x
            high_alt = max(high_alt,curr_alt)

        return high_alt
    