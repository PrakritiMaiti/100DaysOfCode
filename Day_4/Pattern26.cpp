/*
      1 1 1 1 1 1
      2 2 2 2 2
      3 3 3 3
      4 4 4
      5 5
      6
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=n;col>=row;col--){
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}