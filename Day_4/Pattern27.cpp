/*
      1 2 3 4  17 18 19 20
        5 6 7  14 15 16
          8 9  12 13
            10 11

*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int counter=1;
     int sp=n*n+1;
    for(int row=n;row>0;row--){
        for(int col=n;col>row;col--){
            cout<<"  ";
        }
        for(int col=1;col<=row;col++){
            cout<<counter++<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<sp++<<" ";
        }
        sp-=(row*2)-1;
        cout<<endl;
    }
    return 0;
}