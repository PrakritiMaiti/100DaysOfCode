/*
       1      1
       12    21
       123  321
       12344321
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<col;
        }
        for(int col=n-1;col>=row;col--){
            cout<<"  ";
        }
        for(int col=row;col>0;col--){
            cout<<col;
        }
        cout<<endl;
    }
    return 0;
}