/*Given two integers M and N, generate all primes between M and N.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        vector<int> res;
        for(int i=max(M,2);i<=N;i++){
            int f=0;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                f=1;
                break;    
                }
            }
            if(!f)
            res.push_back(i);
        }
        return res;
    }
};

int main() {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    
} 