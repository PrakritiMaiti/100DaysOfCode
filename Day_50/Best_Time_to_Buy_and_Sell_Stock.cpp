/*121. Best Time to Buy and Sell Stock*/
#include<bits/stdc++.h>
using namespace std;
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
int main(){
    vector<int>arr ={7,1,2,4,8,3};
    Solution obj;
    cout<<obj.maxProfit(arr);
    return 0;
}