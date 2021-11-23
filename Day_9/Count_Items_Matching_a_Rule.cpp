#include<iostream>
using namespace std;

int main(){
    int n,m=3;
    cin>>n;
    string arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    string k;
    int key=1,counter=0;
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==k&&j==key){
                counter++;
            }
        }
    }
    cout<<counter;
    return 0;
}