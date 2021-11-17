/*
            1           1   
          1   1         2   
        1   2   1       3
      1   3   3   1     4   
    1   4   6   4   1   5
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=n-1;col>row;col--){
            cout<<"  ";
        }
        int colRange=1;
        for(int col=0;col<=row;col++){
            cout<<colRange<<"   ";
            colRange=colRange*(row-col)/(col+1);
        }
        cout<<endl;
    }
    return 0;
}