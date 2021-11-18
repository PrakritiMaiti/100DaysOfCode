/*
       a
       B c
       D e F
       g H i J
       k L m N o
*/
#include<iostream>
using namespace std;

int main(){
    int n,counter=1;
    char sA='A',sa='a';
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            if(counter%2==0){
                cout<<sA<<" ";
            }else{
                cout<<sa<<" ";
            }
            sa++;sA++;counter++;
        }
        cout<<endl;
    }
    return 0;
}