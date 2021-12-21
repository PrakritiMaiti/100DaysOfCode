#include<iostream>
#include<string>
using namespace std;
int lastlength(string s){
    int num=0,n=s.size();
    for(int i=n-1;i>=0;i--){
       
        if(s[i]==' '&&num>0){
            return num;
        }
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            num++;
        }
    }
    return num;
}
int main(){
    string s;
    getline(cin,s);
    cout<<lastlength(s);
    return 0;
}