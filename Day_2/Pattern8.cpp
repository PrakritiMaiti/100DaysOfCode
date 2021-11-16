/*
       *       1
      ***      3
     *****     5
    *******    7
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int counter=0;
    for(int row=0;row<n;row++){
        for(int col=1;col<n-row;col++){
            cout<<" ";
        }
       for(int col=0;col<=row+counter;col++){
           cout<<"*";
       }
        counter++;
        cout<<endl;
    }
    return 0;
}