#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void max(int arr[],int n){
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        if(maximum<arr[i]) {
            maximum=arr[i];
        }
    }
    cout<<maximum<<endl;
}
void min(int arr[],int n){
    int minimum=INT_MAX;
    for(int i=0;i<n;i++){
        if(minimum>arr[i]) {
            minimum=arr[i];
        }
    }
    cout<<minimum<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    max(arr,n);
    min(arr,n);
    return 0;
}