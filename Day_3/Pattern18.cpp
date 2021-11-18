/*
     **********
     ****  ****
     ***    ***
     **      **
     *        *
     *        *
     **      **
     ***    ***
     ****  ****
     **********
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //for 1st half
    for(int row=1;row<=n;row++){
        for(int col=n;col>=row;col--){
            cout<<"*";
        }
        for(int col=1;col<row;col++){
            cout<<"  ";
        }
        for(int col=n;col>=row;col--){
            cout<<"*";
        }
        cout<<endl;
    }
    //for 2nd half
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        for(int col=n;col>row;col--){
            cout<<"  ";
        }
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}