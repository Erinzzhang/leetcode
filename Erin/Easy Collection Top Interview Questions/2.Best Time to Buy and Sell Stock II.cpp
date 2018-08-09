/* 
Array
File:  Best Time to Buy and Sell Stock II.cpp

Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like 
(i.e., buy one and sell one share of the stock multiple times).

Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).

- Trend chart

creation Date: 09/08/2018
copyright(c) 2018 Ya-Han Chang
*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 0;
        int profit = 0;

        for (int i = 0; i < prices.size();i++)
        {
            if (i + 1 < prices.size() && prices[i] < prices[i+1])
            {
                buy = prices[i];
                sell = prices[i+1];
                profit = sell - buy + profit;
            }
        } 

        return profit;
    }
};
