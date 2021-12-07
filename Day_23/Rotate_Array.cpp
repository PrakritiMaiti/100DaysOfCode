#include<iostream>
using namespace std;

void rotate(int arr[],int n,int k){

    for(int i=k;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>> arr[i];

    rotate(arr,n,k);

    return 0;
}