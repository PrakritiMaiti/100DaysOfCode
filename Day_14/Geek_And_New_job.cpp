#include <iostream>
#include<string>
using namespace std;
bool check(string str);
int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    if(check(str))
	    cout<<"YES";
	    else
	    cout<<"NO";
	    
	    cout<<endl;
	}
	return 0;
}
	 bool check(string str){
	      bool ch1=false;
	      bool ch2=false;
	      bool ch3=false;
	   for(int i=0;i<str.length();i++){
	        if(str[i]>=48 && str[i]<=57){
	            ch1=true;
	        }
	        if(str[i]>=65 && str[i]<=90){
	            ch2=true;
	        }
	        if(str[i]>=97 && str[i]<=122){
	            ch3=true;
	        }
	   }
	   if(ch1&&ch2&&ch3)
	      return true;
	   else
	      return false;
	    }