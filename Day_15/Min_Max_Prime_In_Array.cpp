#include<iostream>
#include<climits>
using namespace std;
int checkPrime(int n){
    // if(n<1) return false;
    for(int i=2;i<n;i++){
        if(n%i==0) 
            return false;
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minimum=INT_MAX,maximum=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<2) continue;
        if(checkPrime(arr[i])==arr[i]){
            if(arr[i]<minimum) minimum=arr[i];
            if(arr[i]>maximum) maximum=arr[i];
        }
    }
    cout<<minimum<<" "<<maximum;
    return 0;
}