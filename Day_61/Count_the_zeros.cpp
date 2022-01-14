/*Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.
Example 1:
Input:
N = 12
Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
Output: 3
Explanation: There are 3 0's in the given array.*/
#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]==0) ans++;
            else break;
        }
        // int start=0;
        // int end=n-1;
        // int mid=n/2;
        // while(start<=end){
        //     mid=(start+end)/2;
        //     if(arr[mid]==0) ans++;
        //     if(arr[start]>arr[mid]){
        //         start++;
        //     }else{
        //         end--;
        //     }
        // }
        
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
