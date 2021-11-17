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
    for(int row=1;row<=2*n;row++){
        for(int col=n;col>=row;col--){
            cout<<"*";
        }
        for(int col=1;col<row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}