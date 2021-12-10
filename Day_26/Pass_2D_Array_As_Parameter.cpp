#include<iostream>
#include<stdio.h>
using namespace std;

void printarr(int n,int m,int *array){
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        cout<<*((array+i*n) + j)<<" ";
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    printarr(n,m,&arr[0][0]);
    return 0;
}