# Day 15 Problem No 32

# 1431. Kids With the Greatest Number of Candies => https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=study-plan-v2&envId=leetcode-75

class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        maxC = 0;
        for i in candies:
            if i > maxC:
                maxC = i
        ans = []
        for i in candies:
            if i+extraCandies >= maxC:
                ans.append(True)
            else:
                ans.append(False)
        return ans
        