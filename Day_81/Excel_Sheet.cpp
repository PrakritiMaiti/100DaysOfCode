/*Given a positive integer N, return its corresponding column title as it would appear in an Excel sheet.
For N =1 we have column A, for 27 we have AA and so on.

Note: The alphabets are all in uppercase.*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string ExcelColumn(int N)
    {
       std::string s(1, 'A'+(N-1)%26);
       if (N<27) return s;
       return  ExcelColumn((N-1)/26) + s;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.ExcelColumn(n)<<endl;
    }
    return 0;
}