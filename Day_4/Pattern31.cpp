/*
         4 4 4 4 4 4 4      
         4 3 3 3 3 3 4   
         4 3 2 2 2 3 4   
         4 3 2 1 2 3 4   
         4 3 2 2 2 3 4   
         4 3 3 3 3 3 4   
         4 4 4 4 4 4 4   
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=0;row<2*n-1;row++){
        for(int col=0;col<2*n-1;col++){
            cout<<n-min(min(row,col),min(2*n-row,2*n-col)-2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}