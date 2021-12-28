/*
1672. Richest Customer Wealth
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.
A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
*/
#include<iostream>
#include<vector>
using namespace std;
int maximumWealth(vector<vector<int>>a) {
        int ans=0,k;
        for(int i=0;i<a.size();i++){
            k=0;
            for(int j=0;j<a[0].size();j++){
                k+=a[i][j];
            }
            if(k>ans) ans=k;
        }
        
        return ans;
    }
int main(){
    int m,n,p;
    cin>>m>>n;
    vector<vector<int>> a(m);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>p;
            a[i].push_back(p);
        }
    }
    
    int ans=maximumWealth(a);
    cout<<ans;
    return 0;
}