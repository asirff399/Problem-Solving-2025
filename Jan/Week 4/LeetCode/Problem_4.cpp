// Day 24 Problem No 52

// 1679. Max Number of K-Sum Pairs => https://leetcode.com/problems/max-number-of-k-sum-pairs/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = nums.size() - 1;
        int opt = 0;
        while(l < r){
            if(nums[l]+nums[r] == k){
                opt++;
                l++;
                r--;
            }
            else if(nums[l]+nums[r] < k){
                l++;
            }
            else{
                r--;
            }
        }
        return opt;
    }
};