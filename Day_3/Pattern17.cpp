/*
       1
      212
     32123
    4321234
     32123
      212
       1
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //for 1st half
    for(int row=1;row<=n;row++){
        for(int col=n;col>row;col--){
            cout<<" ";
        }
       for(int col=row;col>0;col--){
           cout<<col;
       }
       for(int col=2;col<=row;col++){
           cout<<col;
       }
        cout<<endl;
    }
    //for 2nd half
    for(int row=1;row<n;row++){
        for(int col=1;col<=row;col++){
            cout<<" ";
        }
       for(int col=n-row;col>0;col--){
           cout<<col;
       }
       for(int col=2;col<=n-row;col++){
           cout<<col;
       }
        cout<<endl;
    }
    return 0;
}