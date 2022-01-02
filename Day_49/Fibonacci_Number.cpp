//dynamic programming
#include<iostream>
using namespace std;
int fib(int n){
    int arr[n];
    arr[0]=0;arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}
//space saving
int fib1(int n){
    int a=0,b=1,c;
    if(n==1)
        return 0;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    // cout<<fib(n);
    cout<<fib1(n);
    return 0;
}
