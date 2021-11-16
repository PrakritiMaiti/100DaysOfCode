/*
    * * * * *
     * * * *
      * * *
       * *
        *
        *
       * *
      * * *
     * * * *
    * * * * *
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<2*n;row++){
       int colRange= n<row ? 2*n-row : row ;
       for(int col=colRange;col>0;col--){
           cout<<" ";
       }
       for(int col=n;col>=colRange;col--){
           cout<<"* ";
       }
        cout<<endl;

        if(row==n){         //for middle *
        for(int col=colRange;col>0;col--){
           cout<<" ";
       }
       for(int col=n;col>=colRange;col--){
           cout<<"* ";
       }
        cout<<endl;
        }
    }
    return 0;
}