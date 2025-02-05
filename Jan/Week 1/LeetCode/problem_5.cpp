// Day 5 Problem No 10

// 66. Plus One => https://leetcode.com/problems/plus-one/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0; 
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};