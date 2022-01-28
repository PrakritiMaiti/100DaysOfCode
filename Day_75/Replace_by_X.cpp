/*Given a string and a pattern, Replace all the continuous occurrence of pattern with a single X in the string. For a clear view see the example below.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is string str.
The second line of each test case contains a string s,which is a pattern.

Output:

Print the modified string str.*/
#include <iostream>
#include <string>
using namespace std;

void solve(string s,string p){
   int i,j;
   bool flag = true;
   int len = s.length();
   for(i = 0;i < len;i++){
       if(s[i] == p[0]){
           string sub = s.substr(i,p.length());
           if(sub == p){
               if(flag){
                   cout << "X";
               }
               flag = false;
               i += p.length()-1;
           }
           else{
               cout << s[i];
               flag = true;
           }
       }else{
           cout << s[i];
           flag = true;
       }
   }
   cout << endl;
   
}

int main() {
int t;
cin >> t;
while(t--){
    string s,p;
    cin >> s >> p;
    solve(s,p);
}
return 0;
}