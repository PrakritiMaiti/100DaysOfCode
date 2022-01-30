/*Given an array of n elements, where each element is at most k away from its target position. The task is to print array in sorted form.

Input:
First line consists of T test cases. First line of every test case consists of two integers N and K, denoting number of elements in array and at most k positions away from its target position respectively. Second line of every test case consists of elements of array.

Output:
Single line output to print the sorted array.
*/
#include <iostream>
using namespace std;
void selectionsort(int a[],int n){
   for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
       if(a[i]>a[j]){
           int temp=a[i];
           a[i]=a[j];
           a[j]=temp;
       }
   }   }  
}
int main() {
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selectionsort(a,n);
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
return 0;
}