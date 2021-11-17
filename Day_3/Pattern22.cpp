/*      
       1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag=1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<flag<<" ";
            flag= (flag) ? flag=0:flag=1; 
        }
        cout<<endl;
        flag= (row%2) ? flag=0:flag=1; 
    }
    return 0;
}
