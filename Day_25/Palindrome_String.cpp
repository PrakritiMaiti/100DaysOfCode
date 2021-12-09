#include<iostream>
#include<string>
using namespace std;
bool check(string s) {
    int i=0,j=s.length()-1;
    while (i<j){   
        if(s[i]!=s[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    cout<<check(s);
    return 0;
}