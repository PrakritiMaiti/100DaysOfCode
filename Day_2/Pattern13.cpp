/*
        *
       * *
      *   *
     *     *
    *********
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int counter=0;
    for(int row=1;row<=n;row++){
        for(int col=n;col>row;col--){
            cout<<" ";
        }
        for(int col=1;col<=row+counter;col++){
            if(col==1||col==row+counter||row==n){ 
                cout<<"*";
            }else {
                cout<<" ";
            }

        }
        counter++;
        cout<<endl;
    }
    return 0;
}