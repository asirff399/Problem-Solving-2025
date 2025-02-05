# Day 16 Problem No 33

# 1768. Merge Strings Alternately => https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75

class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        merged = []
        i = 0
        j = 0
        while i < len(word1) or j < len(word2):
            if i < len(word1):
               merged.append(word1[i])
               i+=1
            if j < len(word2):
                merged.append(word2[j])
                j+=1
        return ''.join(merged)