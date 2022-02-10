/*Given a positive number k, we need to find a minimum value of positive integer n, such that XOR of n and n+1 is equal to k. If no such n exist then print -1.

*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int xorCal(int k){
      if(k == 1) return 2;
        if((k & (k + 1)) != 0) return -1;
        return (k + 1 >> 1) - 1;
    }
};

int main(){

        int k;
        cin>>k;
        Solution ob;
        cout<<ob.xorCal(k)<<"\n";
    return 0;
} 