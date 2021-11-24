#include<iostream>
using namespace std;
// int r,c,m,n;
// void printarr(int a,int b,int arr[][n]){

// }
// void changearr(int arr[][],int r,int c){

// }
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int r,c;
    cin>>r>>c;
    if(m*n==r*c) changearr(arr,r,c);
    else printarr(m,n,arr);
int newarr[r][c];
int k=m,l=n;
for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){
        if(l>=c){}
        newarr[i][j]=arr[i][j];
    }
}

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}