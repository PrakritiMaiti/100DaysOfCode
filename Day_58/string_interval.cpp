//given a string and number, you have to reverse whole string on interval of the number
#include<iostream>
#include<string>
using namespace std;

void reverse(string s,int k){
    int n=s.length();
    
    for(int i=0;i<n;i+=k){

        for(int j=k-1;j>=0;j--){
            if(i+j>=n)continue;
            cout<<s[i+j];
        }
    }



    // int n=s.length();
    // for(int i=n-1;i>=0;i--){
    //     cout<<s[i];
    // }

}

int main(){
    string s="0123456789";

    int k=4;
    reverse(s,k);
    return 0;
}