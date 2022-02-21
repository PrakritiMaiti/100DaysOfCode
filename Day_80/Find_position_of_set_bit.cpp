/*
Given a number N having only one ‘1’ and all other ’0’s in its binary representation, find position of the only set bit. If there are 0 or more than 1 set bit the answer should be -1. Position of  set bit '1' should be counted starting with 1 from LSB side in binary representation of the number.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPosition(int N) {
       float num=N;
       int c;
       while(num>1){
           c+=1;
           num=num/2;
       }
       if(num==1){
           return c+1;
       }
       return -1;
    }
};

int main() {
    int N;
    cin>>N;
    Solution ob;
    cout << ob.findPosition(N) << endl;
    return 0;
}