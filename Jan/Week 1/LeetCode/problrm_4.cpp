// Day 4 Problem No 8

// 27. Remove Element => https://leetcode.com/problems/remove-element/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(val != nums[i]) {
                nums[cnt]=nums[i];
                cnt++;
            }
        }
        return cnt;
    }
};