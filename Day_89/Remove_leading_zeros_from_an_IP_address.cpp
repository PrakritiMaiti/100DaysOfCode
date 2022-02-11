/*
Given an IP address, remove leading zeros from the IP address. Note that our IP address here can be a little different. It can have numbers greater than 255. Also, it does not necessarily have 4 numbers. The count can be lesser/more.*/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string removeZeros(string s) {
    
    int i = 0;
    while(s[i] == '0'){
        i++;
    }

    string t = s.substr(i,s.length()-i);

    if(t.empty())
        return "0";
    else return t;
  }
  
    
    string newIPAdd (string s)
    {
        string ans = "";

        stringstream ss(s);
    
        string word = "";
        //splitting the string and removing leading zeroes for each substring
        while(getline(ss, word, '.')) {
            ans += removeZeros(word);
            ans += '.';
        }
    
        ans.pop_back();
        return ans;
    }
};
int main()
{
        string s; cin >> s;
        Solution ob;
        cout <<ob.newIPAdd (s) << endl;
    
}
