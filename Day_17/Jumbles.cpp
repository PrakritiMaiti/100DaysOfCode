#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,s1;
    cin>>s>>s1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    if(s==s1) cout<<"True";
    else cout<<"False";
    return 0;
}