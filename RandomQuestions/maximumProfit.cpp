#include <iostream>
using namespace std;

// Problem Description
// You have an array in which the ith element is the price of a given stock on day i.

// Design an algorithm to find the maximum profit by buying a share on one day and selling it on another day. You may repeat this across the days (i.e., buy one and sell one share of the stock multiple times).

// Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again)

class BestTimeToBuyAndSellStocks {
    public:
        // Implement Your Solution Here
        int maxProfit(vector<int>& prices) {
            int profit = 0;
            for(int i=0; i < prices.size()-1; i++){
                    if(prices[i+1] > prices[i]){
                        profit += (prices[i+1]-prices[i]);
                    }
            }
            return profit;
        }
};

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i=0; i<n; i++){
        cin >> prices[i];
    }
    int result = BestTimeToBuyAndSellStocks().maxProfit(prices);
    cout << result;
    return 0;
}
