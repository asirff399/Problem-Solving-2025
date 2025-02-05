// Day 22 Problem No 47

// 1207. Unique Number of Occurrences => https://leetcode.com/problems/unique-number-of-occurrences/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int x:arr){
            mp[x]++;
        }
        set<int> occurr;
        for(auto& pair:mp){
            occurr.insert(pair.second);
        }
        return mp.size() == occurr.size();
    }
};