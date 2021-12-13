#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    string word[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int arr[10];
    int count=0;
    for(;n!=0;){
        int k=n%10;
        arr[count++]=k;
        n/=10;
    }

    for(int i=count-1;i>=0;i--){
        cout<<word[arr[i]]<<" ";
    }
    return 0;
}