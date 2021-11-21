#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int fs=0,nd=0,rd=0;
    for(int i=0;i<n;i++){
       switch (arr[i])
       {
       case 0:
           fs++;
           break;
       case 1:
           nd++;
           break;
       case 2:
           rd++;
           break;
       }
    }
    int j=0;
    while(fs>0){ arr[j++]=0;fs--;}
    while(nd>0) {arr[j++]=1;nd--;}
    while(rd>0) {arr[j++]=2;rd--;}
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}

    return 0;
}