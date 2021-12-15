#include<iostream>
using namespace std;

int main(){
    int num=215;
    int i=4;
    int mask=(1<<i)-1;
    int result = num&mask;
    cout<<result;
    return 0;
}