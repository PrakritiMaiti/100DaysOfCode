#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int hr;bool f=true;
    string hr1,m1;
for(int i=0;i<s.length();i++){
    if(s[i]==':') continue ;
    if(s[i+1]==':'||s[i+2]==':')hr1+=s[i];
    if(s[i-1]==':'||s[i-2]==':')m1+=s[i];
    if(s[i]=='P') f=false;
    //if(s[i]=='A')
}
    hr=stoi(hr1);
   // m=stoi(m1);
if(f)cout<<hr<<":"<<m1;
else if(hr+12==24)cout<<"00:"<<m1;
else cout<<hr+12<<":"<<m1;
    return 0;
}