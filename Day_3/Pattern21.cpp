/*
       1
       2  3
       4  5  6
       7  8  9  10
       11 12 13 14 15
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int counter=1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<setw(2)<<counter++<<" ";
        }
        cout<<endl;
    }
    return 0;
}