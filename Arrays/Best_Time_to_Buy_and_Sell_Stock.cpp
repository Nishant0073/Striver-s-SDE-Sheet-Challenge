#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int buy = prices[0];
    int sell = prices[0];
    int profit = buy-sell;
    for(int i=1;i<prices.size();i++)
    {
        if(prices[i]>sell)
            sell = prices[i];

        if(prices[i]<buy)
        {
            buy = prices[i];
            sell = prices[i];
        }
        profit = max(profit,sell-buy);
    }
    return profit;
}
