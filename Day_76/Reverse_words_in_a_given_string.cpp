/*Given a String S, reverse the string without reversing its individual words. Words are separated by dots.
Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string res="", ans="";
        
        for(int i=S.length()-1;i>=0;i--){
            if(S[i]=='.'){
                ans+='.';
                continue;
            }else{
                res+=S[i];
            }
            if(S[i-1]=='.'||i==0){
                for(int j=res.length()-1;j>=0;j--){
                    ans+=res[j];
                }
                res="";
            }
            
        }
        return ans;
    } 
};

int main() 
{
    string s;
    cin >> s;
    Solution obj;
    cout<<obj.reverseWords(s)<<endl;
    
} 