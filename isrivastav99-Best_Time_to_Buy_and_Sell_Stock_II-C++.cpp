/**
 * Solution to 122. Best Time to Buy and Sell Stock II at LeetCode in C++
 *
 * author: Ishaan Srivastav
 * ref: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
 */


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==0)
            return 0;
        int b = -1, total = 0;
        bool check = false;
        for(int i = 0;i<n-1;i++){
            if(b == -1){
                if(prices[i]<prices[i+1]){
                    b = prices[i];
                    check =  true;
                }
            
            }
            else{
                if(prices[i]>prices[i+1]){
                    total += prices[i] - b;
                     b = -1;
                }
            }
        }
        if(b!=-1)
            total += prices[n-1] - b;
        return total;
        
    }
};
