/*You meet a group of aliens, and their language is just like English except that they say every word backwards.
How will you learn to communicate with them?

Task:
Take a word in English that you would like to say, and turn it into language that these aliens will understand.

Input Format:
A string of a word in English.

Output Format:
A string of the reversed word that represents the original word translated into alien language.

Sample Input:
howdy

Sample Output:
ydwoh*/
#include <iostream>
#include<string>
using namespace std;

int main() {
string s;
cin>>s;
for(int i=s.length()-1;i>=0;i--)
cout<<s[i];

return 0;
}
