//  Day 15 Problem No 30

// 605. Can Place Flowers => https://leetcode.com/problems/can-place-flowers/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i] == 0 && (i==0 || flowerbed[i-1] == 0) && (i == flowerbed.size()-1 || flowerbed[i+1]==0)){
                flowerbed[i] =1;
                n--;
            }
            if(n==0){
                return true;
            }
        }
        return n<=0;
    }
};