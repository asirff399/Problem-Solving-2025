//  Day 13 Problem No 26

// 443. String Compression => https://leetcode.com/problems/string-compression/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int compress(vector<char>& chars) {
        int w = 0;
        int r = 0;
        while(r < chars.size()){
            char currentChar = chars[r];
            int count = 0;
            while(r < chars.size() && currentChar == chars[r]){
                count++;
                r++;
            }
            chars[w++] = currentChar;
            if(count > 1){
                for(char c:to_string(count)){
                    chars[w++] = c;
                }
            }

        }
        return w;
    }
};