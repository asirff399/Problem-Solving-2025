// Day 7 Problem No 13

// 121. Best Time to Buy and Sell Stock => https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_price=INT_MAX;
        int max_pro=0;
        for(int i=0;i<n;i++){
            if(prices[i] < min_price){
                min_price=prices[i];
            }
            int profit = prices[i] - min_price;
            if(max_pro < profit){
                max_pro = profit;
            }
        }
        if(max_pro < 0) return 0;
        return max_pro;
    }
};