// Week 6 Day 36 Problem 79

// 1800. Maximum Ascending Subarray Sum => https://leetcode.com/problems/maximum-ascending-subarray-sum/description/?envType=daily-question&envId=2025-02-04

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int mx=0;
        int cnt = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i-1]){
                cnt+=nums[i];
            }else{
                mx = max(cnt,mx);
                cnt = nums[i];
            }
        }
        mx = max(cnt,mx);
        return mx;
    }
};