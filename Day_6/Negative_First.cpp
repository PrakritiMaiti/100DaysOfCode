#include<iostream>
using namespace std;

int main(){
    int arr[]={-23,4,-3,2,9,-4,-33};
    int size=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
         if(i!=j) swap(arr[i],arr[j]);
         j++;
        }
    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}