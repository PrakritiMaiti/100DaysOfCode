#include<bits/stdc++.h>
using namespace std;
int sum;
string check(string s){
    string k;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9'){
            if(s[i]=='0') sum+=0;
            if(s[i]=='1') sum+=1;
            if(s[i]=='2') sum+=2;
            if(s[i]=='3') sum+=3;
            if(s[i]=='4') sum+=4;
            if(s[i]=='5') sum+=5;
            if(s[i]=='6') sum+=6;
            if(s[i]=='7') sum+=7;
            if(s[i]=='8') sum+=8;
            if(s[i]=='9') sum+=9;
            
        }else{
            k+=s[i];
        }
    }
    return k;
}

int main(){
    string s;
    cin>>s;
    cout<<check(s)<<endl;
    cout<<sum;
    return 0;
}