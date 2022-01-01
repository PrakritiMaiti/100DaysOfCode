#include<bits/stdc++.h>
using namespace std;
int maxelement(int arr[],int n){
    int maxnum=INT_MIN;
    for(int i=0;i<n;i++){
       if(arr[i]>maxnum) maxnum=arr[i]; 
    }
    return maxnum;
}
int minelement(int arr[],int n){
    int minnum=INT_MAX;
    for(int i=0;i<n;i++){
       if(arr[i]<minnum) minnum=arr[i]; 
    }
    return minnum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxelement(arr,n)<<" "<< minelement(arr,n);
    return 0;
}