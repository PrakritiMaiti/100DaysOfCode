/*
          *****
         *   *
        *   *
       *   *
      *****
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=n;col>row;col--){
            cout<<" ";
        }
        for(int col=1;col<=n;col++){
            if(row==1||col==1||col==n||row==n){
                cout<<"*";
            }else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}