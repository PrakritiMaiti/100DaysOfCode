/*
Given a sorted array keys[0.. n-1] of search keys and an array freq[0.. n-1] of frequency counts, where freq[i] is the number of searches to keys[i]. Construct a binary search tree of all keys such that the total cost of all the searches is as small as possible.
Let us first define the cost of a BST. The cost of a BST node is level of that node multiplied by its frequency. Level of root is 1.*/
//Optimal binary search tree
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int dp[101][101][101];
   int sol(int k[],int f[],int l,int r,int h)
   {
       if(l>r)
       return 0;
       
       if(dp[l][r][h]!=-1)
       return dp[l][r][h];
       
       int t=INT_MAX;
       for(int i=l;i<=r;i++)
       {
           t=min(t,h*f[i]+sol(k,f,l,i-1,h+1)+sol(k,f,i+1,r,h+1));
       }
       return dp[l][r][h]=t;
   }
   int optimalSearchTree(int keys[], int freq[], int n)
   {
       memset(dp,-1,sizeof dp);
       return sol(keys,freq,0,n-1,1);
   }
};
int main()
{
        int n;
        cin >> n;
        int keys[n];
        for(int i=0;i<n;i++)cin>>keys[i];
        int freq[n];
        for(int i=0;i<n;i++)cin>>freq[i];
        Solution ob;
        cout<<ob.optimalSearchTree(keys, freq, n)<<endl;
    
    return 0;
} 