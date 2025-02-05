// Day 3 Problem No 5

// 2270. Number of Ways to Split Array => https://leetcode.com/problems/number-of-ways-to-split-array/description/?envType=daily-question&envId=2025-01-03

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long cnt=0;
        long long total=0;
        long long left=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        for(int i=0;i<n-1;i++){
            left+=nums[i];
            long long right = total-left;
            if(left >= right){
                cnt++;
            }
        }
        return cnt;   
    }
};