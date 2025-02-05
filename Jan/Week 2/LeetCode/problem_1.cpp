// Day 8 Problem No 15

// 136. Single Number => https://leetcode.com/problems/single-number/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int num:nums){
            a[num]++;
        }
        for(auto&[k,v]:a){
            if(v==1){
                return k;
            }
        }
        return -1;
    }
};