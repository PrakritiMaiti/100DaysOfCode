#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) cin>>arr2[i];
    int counter=n+m;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]) {
            counter--;
            }
        }
    }
    cout<<counter;
    return 0;
}