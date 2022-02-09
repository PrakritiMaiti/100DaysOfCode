/*Given an array of integers, sort the array (in descending order) according to count of set bits in binary representation of array elements. 

Note: For integers having same number of set bits in their binary representation, sort according to their position in the original array i.e., a stable sort.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
   int setbit(int x){
       if(x==0)return 0;
       
       int count=0;
       
       while(x!=0){
           if(x&1)count++;
           
           x=x>>1;
       }
       return count;
   }
   void sortBySetBitCount(int arr[], int n)
   {
       
       map<pair<int,int>,int,greater<pair<int,int>>>m;
       int val=0;
       for(int i=0;i<n;++i){
           val=setbit(arr[i]);
           m[{val,n-i}]=arr[i];
       }
       int j=0;
       for(auto i:m){
           arr[j++]=i.second;
       }
       return;
   }
};

int main()
{
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    return 0;
}