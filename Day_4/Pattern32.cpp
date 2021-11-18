/*
       E
       D E
       C D E
       B C D E
       A B C D E
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    char alpha='A';
    cin>>n;
    for(int row=1;row<=n;row++){
        alpha='A'+(n-row);
        for(int col=0;col<row;col++){
            cout<<alpha++<<" ";
        }
        cout<<endl;
    }
    return 0;
}