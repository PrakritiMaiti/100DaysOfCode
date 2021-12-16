#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;  //a=5,b=7
    cout<<"before swap a : "<<a<<" b : "<<b<<endl;
    //a=101   b=111
    a^=b; //a^b= 101^111 =010(2)
    b^=a; //b^a= 111^010 =101(5)
    a^=b; //a^b= 010^101 =111(7)

    cout<<"after swap a : "<<a<<" b : "<<b<<endl;

    return 0;
}