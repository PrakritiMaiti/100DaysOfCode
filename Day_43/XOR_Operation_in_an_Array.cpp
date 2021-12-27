/*
1486. XOR Operation in an Array
You are given an integer n and an integer start.
Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length.
Return the bitwise XOR of all elements of nums.
*/
#include<iostream>
using namespace std;

int xorOperation(int n, int start) {
         int ans=start;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=start+2*i;
        }
        for(int i=1;i<n;i++){
            ans^=arr[i];
        }
        return ans;
    }

int main(){
    int n,start,ans;
    cin>>n>>start;
    ans=xorOperation(n,start);
    cout<<ans;
    return 0;
}