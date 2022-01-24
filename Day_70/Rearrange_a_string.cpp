/*Rearrange a string 
Given a string containing uppercase alphabets and integer digits (from 0 to 9), the task is to print the alphabets in the lexicographical order followed by the sum of digits.*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string arrangeString(string str)
    {
      int sum=0;
string ans="";
sort(str.begin(),str.end());
for(int i=0;i<str.size();i++)
{
if(str[i]-'0'>=0 && str[i]-'0'<10)
{
sum+=str[i]-'0';
}
else
ans.push_back(str[i]);
}
ans+=to_string(sum);
return ans;
        
    }
};

int main(){
    
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    
return 0;
}