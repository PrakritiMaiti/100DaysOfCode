#include<iostream>
using namespace std;
int binarySearch(int arr[],int low,int high, int key){
    
        if(low>high) return -1;
        int mid= (low+high)/2;
        cout<<low<<" "<<mid<<" "<<high<<endl;
        if(arr[mid]==key) return mid+1;
        else if(arr[mid]>key) binarySearch(arr,low,mid-1,key);
        else binarySearch(arr,mid+1,high,key);
    
    
}
int main(){
    int arr[]={1,11,12,13,22,33,44,55,66,77,88};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    int key=13;

    cout<<binarySearch(arr,0,arr_size-1,key);
    return 0;
}