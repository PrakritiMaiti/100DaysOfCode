#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<"    ";
        }
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int j=2;j<i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i && i!=1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"    ";
        }
        for(int j=n-i;j>0;j--){
            cout<<j<<" ";
        }
        for(int j=n-1;j>i && i!=n-2;j--){
            cout<<"  ";
        }
        for(int j=n-1;j>i && i!=n-1;j--){
            cout<<"  ";
        }
        for(int j=1;j<=n-i && i!=n-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1
*/
   