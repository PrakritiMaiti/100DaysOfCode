/*Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
Algorithm --
To sort an array of size n in ascending order: 
1: Iterate from arr[1] to arr[n] over the array. 
2: Compare the current element (key) to its predecessor. 
3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.*/
#include<iostream>
using namespace std;
void print_arr(int arr[],int size);

void insertion_sort(int arr[],int size){
    
    int j,key;
    for(int i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
    }
    
}

int main(){
   int arr[]={1,2,3,1,2,3,4,4,5,6,22,4,3,2,3,4,5,4,3,4,11,31,2,54,5,82};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr,arr_size);

    print_arr(arr,arr_size);
    return 0;
}

void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return;
}