// Day 23 Problem No 51

// 11. Container With Most Water => https://leetcode.com/problems/container-with-most-water/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() -1;
        int maxx = 0;
        while(l < r){
            int h = min(height[l],height[r]);
            int w = r - l;
            maxx = max(maxx, h * w);

            if(height[l] < height[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxx;
    }
};