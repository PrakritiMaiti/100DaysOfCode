/*
    *
    * *
    * * *
    * * * *
    * * *
    * *
    *
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<2*n;row++){
        int col1= (row<=n)? row : 2*n-row ;
        for(int col=1;col<=col1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}