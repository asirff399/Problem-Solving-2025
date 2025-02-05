//  Day 12 Problem No 24

// 151. Reverse Words in a String => https://leetcode.com/problems/reverse-words-in-a-string/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        istringstream stream(s);
        vector<string> words;
        string word;
        while(stream>>word){
            reverse(word.begin(),word.end());
            words.push_back(word);
        }
        string str;
        for(int i=0;i<words.size();i++){
            if(i>0) str+= " ";
            str += words[i];
        }
        
        return str;
    }
};