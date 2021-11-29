#include<iostream>
#include<cmath>
using namespace std;
int geometricProgression(int st,int cr,int n){
    return st*pow(cr,n-1);
}
int main(){
    int st;//first term
    int cr;//common ratio
    int n;
    cin>>st>>cr>>n;
    cout<<geometricProgression(st,cr,n);
    return 0;
}