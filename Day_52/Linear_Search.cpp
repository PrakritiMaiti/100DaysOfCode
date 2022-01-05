#include<iostream>
using namespace std;
void print_arr(int arr[],int size);

void linear_search(int arr[],int size,int key){
    bool flag=false;
    for(int i=0;i<size;i++){
       if(arr[i]==key){
           flag=true;
           break;
       }
    }
    if(flag){
        cout<<"key is present in the array."<<endl;
    }else{
        cout<<"key is not present in the array."<<endl;
    }
}

int main(){
   int arr[]={1,2,3,1,2,3,4,4,5,6,22,4,3,2,3,4,5,4,3,4,11,31,2,54,5,82};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    int key=2222;
    linear_search(arr,arr_size,key);

    
    return 0;
}
