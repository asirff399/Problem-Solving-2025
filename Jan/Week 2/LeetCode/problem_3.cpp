//  Day 10 Problem No 20

// 238. Product of Array Except Self => https://leetcode.com/problems/product-of-array-except-self/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int l = 1;
        int r = 1;
        for(int i=0;i<n;i++){
            ans[i] = l;
            l = l * nums[i];
        }
        for(int i=n-1;i>=0;i--){
            ans[i] = ans[i] * r;
            r = r * nums[i];
        }
        return ans;
    }
};