
/**
 * Solution to 714. Best Time to Buy and Sell Stock with Transaction Fee at LeetCode in C++
 *
 * author: Ishaan Srivastav
 * ref: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
 */


class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        if(n<=1)
            return 0;
        vector<int> buy(n);
        buy[0] = -prices[0];
        vector<int> sell(n);
        sell[0] = 0;
        
        for(int i = 1;i<n;i++){
            buy[i] = max(buy[i-1], sell[i-1] - prices[i]);
            sell[i] = max(sell[i-1], prices[i] + buy[i] - fee);
        }
        
        return sell[n-1];
    }
};
