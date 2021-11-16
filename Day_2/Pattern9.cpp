/*
    *******
     *****
      ***
       *
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int counter=n;
    for(int row=0;row<n;row++){
        for(int col=row;col>0;col--){
            cout<<" ";
        }
        for(int col=n+counter-1;col>row;col--){
            cout<<"*";
        }
        counter--;
        cout<<endl;
    }
    return 0;
}