//  Day 11 Problem No 22

// 334. Increasing Triplet Subsequence => https://leetcode.com/problems/increasing-triplet-subsequence/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int f=INT_MAX;
        int s=INT_MAX;
        for(int n:nums){
            if( n <= f){
                f = n;
            }else if(n <= s){
                s = n;
            }else return true;
        }
        return false;
    }
};