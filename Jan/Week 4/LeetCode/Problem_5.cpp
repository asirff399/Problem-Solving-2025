// Day 25 Problem No 54

// 1456. Maximum Number of Vowels in a Substring of Given Length => https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int maxVowels(string s, int k) {
        int mxcnt = 0;
        int currcnt = 0;
        auto isV = [](char c){
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        for(int i=0;i<k;i++){
            if(isV(s[i])) currcnt++;
        }
        mxcnt = currcnt;
        for(int i=k;i<s.size();i++){
            if(isV(s[i])) currcnt++;
            if(isV(s[i-k])) currcnt--;
            mxcnt = max(mxcnt,currcnt);
        }
        return mxcnt;
    }
};