//  Day 9 Problem No 18

// 1929. Concatenation of Array => https://leetcode.com/problems/concatenation-of-array/description/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2*n);
        for(int i=0;i<n;i++){
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }
        return ans;
    }
};
