/*121. Best Time to Buy and Sell Stock
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,minnum=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(minnum>prices[i]) minnum=prices[i];
            ans=max(ans,prices[i]-minnum);
        }
        return ans;
    }
};