/*Input : 1234
  Output : 1
  Explanation : The sum of 1+2+3+4 = 10, 
              digSum(x) == 10
              Hence ans will be 1+0 = 1
*/
#include<iostream>
using namespace std;

void single_digit(int num){
    if(num==0) cout<<0;

    if(num%9==0) cout<<9;
    else cout<<num%9;
}
int main(){
    int num=12345;
    // cin>>num;

    single_digit(num);
    return 0;
}