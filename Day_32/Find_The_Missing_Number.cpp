/*
You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x1=0,x2=0;
    for(int i=0;i<n;i++){
        x1^=arr[i];
    }
    cout<<x1<<endl;
    for(int i=1;i<=n+1;i++){
        x2^=i;
    }
    cout<<x2<<endl;
    cout<<(x1^x2);
    return 0;
}