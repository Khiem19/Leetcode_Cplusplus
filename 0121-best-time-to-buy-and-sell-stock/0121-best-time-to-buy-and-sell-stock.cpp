class Solution {
public:
    // int maxProfit(vector<int>& prices) {
    //     int profit = 0;
    //     int prv_profit = 0;
    //     for (int i = 0; i < prices.size() ; i++){
    //         for (int j = i; j < prices.size(); j++){
    //             if(prices[i] < prices[j]) {
    //                 prv_profit = profit;
    //                 profit = prices[j] - prices[i];
    //                 profit = max(profit, prv_profit);
    //             }
    //         } 
    //     }
    //     return profit;
    // }

    int maxProfit(vector<int>& prices) {
    int profit = 0;
    int minPrice = prices[0]; // Track the minimum price encountered so far

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i]; // Update the minimum price
        } else if (prices[i] - minPrice > profit) {
            profit = prices[i] - minPrice; // Calculate and update the maximum profit
        }
    }
    return profit;
    }
};