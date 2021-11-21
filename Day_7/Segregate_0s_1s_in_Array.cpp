#include<iostream>
using namespace std;
void setarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void sortarray(int arr[],int n);
int main(){
    int n;
    cin>>n;
    int arr[n];
    setarray(arr,n);
    sortarray(arr,n);
    printarray(arr,n);
    return 0;
}
void sortarray(int arr[],int n){
    int counter=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) counter++;
    }
    int j=0;
    while(counter>0){
        arr[j++]=0;
        counter--;
    }
    while(n>j){
        arr[j++]=1;
    }
}