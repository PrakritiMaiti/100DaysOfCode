/*
       ****
       *  *
       *  *
       *  *
       ****
*/
#include<iostream>
using namespace std;

int main(){
    int h,w;
    cin>>h>>w;
    for(int row=1;row<=h;row++){
        for(int col=1;col<=w;col++){
            if(row==1||row==h||col==1||col==w){
                cout<<"*";
            }else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}