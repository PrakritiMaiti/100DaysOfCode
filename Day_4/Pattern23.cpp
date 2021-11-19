/*
        *      *
      *   *  *   *
    *      *      *
*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   for(int row=0;row<n;row++){
     for(int col=n;col>row;col--){
       cout<<" ";
     }
     for(int col=0;col<=row;col++){
       if(col==0||col==row)cout<<"* ";
       else cout<<"  ";
     }
     for(int col=n-1;col>row;col--){
       cout<<"  ";
     }
     for(int col=0;col<=row;col++){
       if(row==n-1&&col==0){cout<<"  ";continue;}
       if(col==0||col==row)cout<<"* ";
       else cout<<"  ";
     }
     cout<<endl;
   }
    return 0;
}