#include<iostream>
using namespace std;

int main(){
    int num =7;
    int i= 1;
    int mask = ~((1 << i+1 ) - 1);//LSB to i th bit so, i+1
    int result = num & mask;
    cout<<result;
    return 0;
}