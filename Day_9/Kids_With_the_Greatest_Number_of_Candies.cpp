#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int maxcandi=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(maxcandi<arr[i]){
            maxcandi=arr[i];
        }
    }
    int extraCandi=3;
    // cin>>extraCandi;
    bool newarr[n];
    for(int i=0;i<n;i++){
        if((arr[i]+extraCandi)>=maxcandi){
            newarr[i]=true;
        }else{
            newarr[i]=false;
        }
    }
    for(int i=0;i<n;i++){
        //cout<<newarr[i]<<" ";
        if(newarr[i]==1){
            cout<<"true"<<" ";
        }else{
            cout<<"false"<<" ";
        }
    }
    return 0;
}
