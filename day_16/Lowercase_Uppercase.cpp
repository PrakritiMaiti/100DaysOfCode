#include<iostream>
using namespace std;

int main(){
    char s;
    cin>>s;
    if(s>=65&&s<=90){
        cout<<"lowercase";
    }else if(s>=97&&s<=120){
        cout<<"uppercase";
    }else{
        cout<<"invalid";
    }
    return 0;
}