# Day 21 Problem No 45

# 2215. Find the Difference of Two Arrays => https://leetcode.com/problems/find-the-difference-of-two-arrays/description/?envType=study-plan-v2&envId=leetcode-75

class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        l1 = set(nums1)
        l2 = set(nums2)
        
        a1 = list(l1 -l2)
        a2 = list(l2 -l1)

        return [list(a1), list(a2)]

# C++ Solution

# class Solution {
# public:
#     vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
#         set<int> set1(nums1.begin(),nums1.end());
#         set<int> set2(nums2.begin(),nums2.end());

#         vector<int> d1;
#         vector<int> d2;

#         for(int num:set1){
#             if(set2.find(num) == set2.end()){
#                 d1.push_back(num);
#             }
#         }

#         for(int num:set2){
#             if(set1.find(num) == set1.end()){
#                 d2.push_back(num);
#             }
#         }
#         return {d1,d2};
#     }
# };