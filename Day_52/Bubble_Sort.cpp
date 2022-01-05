
#include<iostream>
using namespace std;
void print_arr(int arr[],int size);

void bubble_sort(int arr[],int size){ //function for bubble sort
    bool flag;
    for(int i=0;i<size-1;i++){
        flag=true;
        for(int j=0;j<size-1-i;j++){ //which portion of array is already sorted no need to itreat again
            if(arr[j]>arr[j+1]){ 
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag){ //if no swap occured means array is sorted, no need to loop further
            break;
        }
    }
    return;
}

int main(){
    int arr[]={1,2,3,1,2,3,4,4,5,6,22,4,3,2,3,4,5,4,3,4,11,31,2,54,5,82};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,arr_size);

    print_arr(arr,arr_size);
    return 0;
}

void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return;
}