/*
       E D C B A
       D C B A
       C B A
       B A
       A
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char alpha='A';
    for(int row=0;row<n;row++){
        alpha=alpha+(n-row);
        for(int col=n;col>row;col--){
            cout<<--alpha<<" ";
        }
        cout<<endl;
    }
    return 0;
}