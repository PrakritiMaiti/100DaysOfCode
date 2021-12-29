/*
Given a value V and array coins[] of size M, the task is to make the change for V cents, given that you have an infinite supply of each of coins{coins1, coins2, ..., coinsm} valued coins. Find the minimum number of coins to make the change. If not possible to make change then return -1.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int check(int coins[], int M, int V){
    int i,j,dp[V+1]={0};
    for(i=1;i<=V;i++)
    {
        dp[i]=INT_MAX-1;
        for(j=0;j<M;j++)
        {
            if(i-coins[j]>=0)
            dp[i]=min(dp[i],dp[i-coins[j]]+1);
        }
    }
    if(dp[V]==INT_MAX-1)
    return -1;
    return dp[V];
} 

int main(){
    int m,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    cout<<check(arr,n,m);
    return 0;
}