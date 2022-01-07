#include<iostream>
using namespace std;

void binarysearch(int arr[],int size,int key){
    int st=0,mid,last=size-1,cnt=0;
    while(st<=last){
        mid=(st+last)/2;
        cout<<1+cnt++<<" "<<st<<" "<<mid<<" "<<last<<endl;
        if(arr[mid]==key) {
            cout<<"found"<<" "<<mid;
            return;
        }else if(arr[mid]>key ){
            last=mid-1;
        }else{
            st=mid+1;
        }
    }
    cout<<"not found";

}
int main(){
    // int arr[]={9,8,7,6,5,4,3,2,1};
    int arr[]={1,2,3,4,5,6,7,8,9};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    int key=9;

    binarysearch(arr,arr_size,key);
    return 0;
}