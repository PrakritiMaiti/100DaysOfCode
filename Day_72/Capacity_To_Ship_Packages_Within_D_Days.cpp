/*Capacity To Ship Packages Within D Days 
Given an array arr[] of N weights. Find the least weight capacity of a boat to ship all weights within D days.
The ith weight has a weight of arr[i]. Each day, we load the boat with weights given by arr[i].We may not load more weight than the maximum weight capacity of the ship.

Note: You have to load weights on the boat in the given order.

 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPossible(int mid,int arr[],int N,int d)
    {
        int reqd=1;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            if(sum+arr[i]<=mid)
            {
                sum+=arr[i];
            }
            else
            {
                if(arr[i]>mid)
                return false;
                sum=arr[i];
                reqd++;
            }
        }
        return reqd<=d;
    }
    int leastWeightCapacity(int arr[], int N, int D) {
        int low=1;
        int high=accumulate(arr,arr+N,0);
        int res=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isPossible(mid,arr,N,D))
            {
                res=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return res;
    }
};


int main() {

        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;

    return 0;
} 