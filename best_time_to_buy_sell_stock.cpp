// Problem: given an array prices where prices[i] is the price of a given stock on the ith day.

//You want to maximize your profit by choosing a single day to buy one stock and choosing a 
//different day in the future to sell that stock.

//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0

#include<bits/stdc++.h>
using namespace std;

int getMaxProfit(vector<int> price, int n)
{
    int i;
    int minPrice = price[0], maxProfit = 0;
    for(i = 1; i < n; i++) {
        if(minPrice > price[i]) {
            minPrice = price[i];
        } else if(price[i] - minPrice > maxProfit) {
            maxProfit = price[i] - minPrice;
        }
    }
    return maxProfit;
}

int main()
{
    int n, i;
    cout << "Enter number of days : ";
    cin >> n;
    vector<int> price(n);
    cout << "Enter prices of stock on each day : " << endl;
    for(i = 0; i < n; i++) {
        cin >> price[i];
    }

    int res = getMaxProfit(price, n);
    cout << "Maximum Profit is : " << res;

    return 0;
}