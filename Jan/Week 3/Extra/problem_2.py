# Day 16 Problem No 35

# 1071. Greatest Common Divisor of Strings => https://leetcode.com/problems/greatest-common-divisor-of-strings/description/?envType=study-plan-v2&envId=leetcode-75

import math
class Solution(object):
    def gcdOfStrings(self, str1, str2):
        
        if str1+str2 != str2+str1:
            return ""

        gcd_len = math.gcd(len(str1),len(str2))

        return str1[:gcd_len]
        