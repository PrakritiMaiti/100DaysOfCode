/*You are given an array arr[], you have to re-construct an array arr[].
The values in arr[] are obtained by doing OR(bitwise or) of consecutive elements in the array.*/
#include<bits/stdc++.h>
using namespace std;

int* game_with_number(int arr[], int n);

int main()
{
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int *arr2;
        
        arr2 = game_with_number(arr, n);
        for(int i = 0;i < n; i++)
            cout << arr2[i] << " ";
        
        cout << endl;
        
    

}
int* game_with_number(int arr[], int n)
{
    for(int i=0; i<n-1;i++){ 
        //traverse till n-1th elememt of array.
       arr[i]=arr[i] | arr[i+1]; 
       //use bitwise or operator “|” to for ith and i +1 th position to compare and store its value in arr[i].
   }
   return arr;
}