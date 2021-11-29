#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

bool cubecheck(int n){
    int i=sqrt(n);
    if(n==i*i){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxcube=INT_MIN,mincube=INT_MAX;
    for(int i=0;i<n;i++){
       if(cubecheck(arr[i])){
           if(arr[i]<mincube) mincube=arr[i];
           if(arr[i]>maxcube) maxcube=arr[i];
       } 
    }
    cout<<mincube<<" "<<maxcube;

    return 0;
}