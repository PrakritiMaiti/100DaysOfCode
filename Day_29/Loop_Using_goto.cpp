#include<iostream>
using namespace std;

int main(){
    int i=9;
    // for(int j=1;j<=i;j++){
    //     cout<<j<<" ";
    // }
    int j=1;
    gotoloop:
    cout<<j<<" ";
    j++;
    if(j<=9){
        goto gotoloop;
    }
    return 0;
}