#include<iostream>
using namespace std;

int main(){
    int A,count=0;
    cin>>A;
    while(A){
        A=A&(A-1);
        count ++;
    }
    cout<< count;
    return 0;
}