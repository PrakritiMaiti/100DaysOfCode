#include<iostream>
using namespace std;
 void arrayinput(int arr[],int n){
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
 }
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    arrayinput(arr,n);
    int newarr[n+n];
    for(int i=0;i<n;i++){
        newarr[i]=arr[i];
        newarr[i+n]=arr[i];
    }
    printarray(newarr,2*n);
    return 0;
}