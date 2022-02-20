/*Given an array of size N containing positive integers n and a number k,The absolute difference between values at indices i and j is |a[i] – a[j]|. There are n*(n-1)/2 such pairs and you have to print the kth smallest absolute difference among all these pairs.*/
#include <bits/stdc++.h>
using namespace std;

int countPairs(int a[],int n,int mid)
{
   int ans=0;
   
   for(int i=0;i<n;i++)
   {
       ans=ans+upper_bound(a+i,a+n,a[i]+mid)-(a+i+1);
       
   }
   return ans;
}
int kthDiff(int a[], int n, int k)
{
   sort(a,a+n);
   
   int low=a[1]-a[0];
   
   for(int i=1;i<n-1;i++)
   {
       low=min(low,a[i+1]-a[i]);
   }
   
   int high=a[n-1]-a[0];
   
   while(low<high)
   {
       int mid=low+(high-low)/2;
       
       if(countPairs(a,n,mid)<k)
       {
           low=mid+1;
       }
       else
       {
           high=mid;
       }
   }
   
   return low;
}
int main() {
    int t, i;
    int k;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;

        cout << kthDiff(a, n, k) << endl;
    }
    return 0;
}
