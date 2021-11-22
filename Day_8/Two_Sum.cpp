#include<iostream>
using namespace std;

int main(){
    int arr[]={21,7,11,2};
    int target=9;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int sum=arr[i]+arr[j];
            cout<<sum<<endl;
            if(sum==target){
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
    return 0;
}