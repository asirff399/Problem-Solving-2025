// Day 6 Problem No 11

// 88. Merge Sorted Array => https://leetcode.com/problems/merge-sorted-array/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> new1;
        vector<int> new2;
        for(int i=0;i<m;i++){
            new1.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            new1.push_back(nums2[i]);
        }
        vector<int> newarr = new1 + new2;
        sort(newarr.begin(),newarr.end());
        return newarr;
    }
};