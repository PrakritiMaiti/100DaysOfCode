 /*       
            *
          * *
        * * *
      * * * *
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=row;col<n-1;col++){
            cout<<"  ";
        }
        for(int col=0;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
