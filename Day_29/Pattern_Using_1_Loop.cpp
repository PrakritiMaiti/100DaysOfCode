#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int star=0;
    for(int line=0;line<n;){
      if(line>=star){
          cout<<"*";
          star++;
        //   continue;
      }
      if(line<star){
          cout<<endl;
          line++;
          star=0;
      }

    }

    return 0;
}