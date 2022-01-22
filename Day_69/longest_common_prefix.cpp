/*Given a array of N strings, find the longest common prefix among all strings present in the array.*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        
        string ans="",pre=arr[0];
        for(int i=0;i<N;i++){
            for(int j=0;j<arr[i].length();j++){
                if(pre[j]==arr[i][j]){
                    ans+=arr[i][j];
                }else break;
            }
            if(i==1&&ans.length()==0) return "-1";
            pre=ans;
            ans="";
        }
        if(pre.length()==0) return "-1";
        
        return pre;
    }
};

int main()
{
    
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
        return 0;
}