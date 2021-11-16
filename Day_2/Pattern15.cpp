/*
        *
       * *
      *   *
     *     *
    *       *
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
    int counter=0;
    for(int row=1;row<=n;row++){
        for(int col=n;col>row;col--){
            cout<<" ";
        }
        for(int col=1;col<=row+counter;col++){
            if(col==1||col==row+counter){ 
                cout<<"*";
            }else {
                cout<<" ";
            }

        }
        counter++;
        cout<<endl;
    }
    counter-=2;
    for(int row=1;row<=n;row++){
       if(row==1) continue;
        for(int col=1;col<row;col++){
            cout<<" ";
        }
        for(int col=counter+n;col>0;col--){
            if(col==row||col==n+counter){ 
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