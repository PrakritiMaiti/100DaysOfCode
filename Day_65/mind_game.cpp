/*Someone is asked to perform the following operations on a randomly chosen number between 1 and 10.
Step 1: Double the chosen number.
Step 2: Add a number K(even number given as input) to the number obtained after Step1
Step 3: Divide the obtained number in Step 2 by 2.
Step 4: Now subtract the obtained number in Step 3 with the original chosen number N
Your task is to find the answer obtained at the end of Step 4 ,i.e,at the end of all the mentioned operations performed on the number chosen.*/
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int mindGame(int K) {
        // code here
        int num;

return (((num*2)+K)/2)-num;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int K;
        
        cin>>K;

        Solution ob;
        cout << ob.mindGame(K) << endl;
    }
    return 0;
} 