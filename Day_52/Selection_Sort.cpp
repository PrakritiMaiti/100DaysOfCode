/*The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
1) The subarray which is already sorted. 
2) Remaining subarray which is unsorted.
In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. */
#include<iostream>
using namespace std;
void print_arr(int arr[],int size);

void selection_sort(int arr[],int size){

    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
        }
    }
}

int main(){
   int arr[]={1,2,3,1,2,3,4,4,5,6,22,4,3,2,3,4,5,4,3,4,11,31,2,54,5,82};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr,arr_size);

    print_arr(arr,arr_size);
    return 0;
}

void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return;
}