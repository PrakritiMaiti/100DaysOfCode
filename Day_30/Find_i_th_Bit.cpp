#include<iostream>
using namespace std;

int main(){
    int n=3;
    int i=2;
    
    
    if(n&(1<<i)) cout<<"the bit is '0'";
    else cout<<"the bit is '1'";

    return 0;
}