/*
Find the two non-repeating elements in an array of repeating elements/ Unique Numbers 2
*/
#include<iostream>
using namespace std;

int check(int arr[],int n){ //this is for only 1 unique number 
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int checkfor2(int arr[],int n,int &x,int &y){ //this is for 2 unique number 
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i]; // get the XOR of 2 non repeting number
    }
    int sum= ans&(-ans);
    x=0;y=0;
    for(int i=0;i<n;i++){
        if(arr[i]& sum){
            x=x^arr[i];
        }else{
            y=arr[i]^y;
        }
    }
    return x,y;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<check(arr,n)<<endl;//this is for only 1 unique number 
    int x,y;
    checkfor2(arr,n,x,y);//this is for 2 unique number
    cout<<x<<" "<<y;
    return 0;
}