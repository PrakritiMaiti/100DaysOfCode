#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=91&&n<=100) cout<<"AA";
    if(n>=81&&n<=90) cout<<"AB";
    if(n>=71&&n<=80) cout<<"BB";
    if(n>=61&&n<=70) cout<<"BC";
    if(n>=51&&n<=60) cout<<"CD";
    if(n>=41&&n<=50) cout<<"DD";
    if(n<=40) cout<<"Fail "<<n;
    if(n>100) cout<<"WTF "<<n;
    return 0;
}