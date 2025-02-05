//  Day 14 Problem No 28

// 345. Reverse Vowels of a String => https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string reverseVowels(string s) {
        string v = "aeiouAEIOU";
        int st = 0;
        int end = s.length() -1;
        set<char> v_s(v.begin(),v.end());
        while(st < end){
            while(st < end && v_s.find(s[st]) == v_s.end()){
                st++;
            }
            while(st < end && v_s.find(s[end]) == v_s.end()){
                end--;
            }
            char tmp = s[st];
            s[st] = s[end];
            s[end] = tmp;

            st++;
            end--;
        }
        return s;
    }
};