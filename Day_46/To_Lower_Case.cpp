/* 709. To Lower Case
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>=65&&s[i]<=90){
            s[i]+=32;
        }
    }
    cout<<s;
    return 0;
}