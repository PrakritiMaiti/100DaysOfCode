#include<iostream>
#include<string>
using namespace std;

void checkP(string s){
	int i=0,j = s.length()-1;
	while(i<=j){
		if(s[i]!=s[j]){
			cout<<"Not a palindrome";
			return;
		}
	j--;i++;
	}
	cout<<"Palindrome";
	return;
}
int main () {
	string s;
	getline(cin,s);
	checkP(s);

	return 0;
}