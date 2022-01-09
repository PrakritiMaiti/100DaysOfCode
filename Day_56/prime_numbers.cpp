#include<iostream>
#include<cmath>
using namespace std;

bool checkprime(int n){
    if(n<2){
        // cout<<"not prime";
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) {
            // cout<<"number is not prime. ";
            return 0;
        }
    }
    // cout<<"number is prime.";
    return 1;
}
void tilprime(int n){
    for(int i=1;i<=n;i++){
        if(checkprime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n=100;
    // cin>>n;

    // checkprime(n);
    tilprime(n);
    return 0;
}