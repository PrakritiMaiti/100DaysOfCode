/*
    *********
     *     *
      *   *
       * *
        *

*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int counter=n-1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<row;col++){
            cout<<" ";
        }
        for(int col=counter+n;col>0;col--){
            if(col==row||col==n+counter||row==1){ 
                cout<<"*";
            }else {
                cout<<" ";
            }

        }
        counter--;
        cout<<endl;
    }
    return 0;
}