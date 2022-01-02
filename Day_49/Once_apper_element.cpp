#include<iostream>
using namespace std;
int onceElement(int arr[],int n){
    int ans=arr[0];
    for(int i=1;i<n;i++){
        ans^=arr[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<onceElement(arr,n);
    return 0;
}
/*
5
1 1 2 2 3
ans 3
*/