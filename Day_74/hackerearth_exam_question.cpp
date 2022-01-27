/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
// using namespace std;

void check_num(long long int x,long long int y){
	long long int a,b;
	for(long long int i=0;i<=x/2;i++){
		a=i;b=x-a;
		if(((a^b)==y)){
			std::cout<<a<<" "<<b<<"\n";
			return;
		}
	}
	std::cout<<"-1"<<"\n";
}

int main(){
	int t;
	std::cin>>t;
	while(t--){
		long long int x,y;
		std::cin>>x>>y;
		check_num(x,y);
	}
	return 0;
}
