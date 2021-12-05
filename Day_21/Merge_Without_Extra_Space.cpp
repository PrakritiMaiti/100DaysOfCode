#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m],arr1[n];
    for(int i=0;i<m;i++) cin>>arr[i];
    for(int i=0;i<n;i++) cin>>arr1[i];
    int i=m-1,j=0;
    while(i>=0 && j<n){
        if(arr[i]>arr1[j]){
            swap(arr[i--],arr1[j++]);
        }else{
            break;
        }
    }
    sort(arr,arr+m);
    sort(arr1,arr1+n);
    for(int i=0;i<m;i++) cout<<arr[i]<<" ";
    for(int i=0;i<n;i++) cout<<arr1[i]<<" ";
    return 0;
}