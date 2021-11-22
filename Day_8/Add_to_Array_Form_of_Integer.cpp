#include<iostream>
using namespace std;
void setarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
}
int arraysum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum*10+arr[i];
    }
    return sum;
}
int arraysize(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    setarray(arr,n);
    int newnum=m+arraysum(arr,n);
    int counter=arraysize(newnum);
    int newarr[counter];
    for(int i=counter-1;i>=0;i--){
        newarr[i]=newnum%10;
        newnum/=10;
    }
    printarray(newarr,counter);

    return 0;
}