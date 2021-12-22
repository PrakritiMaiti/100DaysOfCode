/*
You and your friends like to share YouTube links all throughout the day. You want to keep track of all the videos you watch in your own personal notepad, but you find that keeping the entire link is unnecessary.
Keep the video ID (the combination of letters and numbers at the end of the link) in your notepad to slim down the URL.

Task:
Create a program that parses through a link, extracts and outputs the YouTube video ID.

Input Format:
A string containing the URL to a YouTube video. The format of the string can be in "https://www.youtube.com/watch?v=kbxkq_w51PM" or the shortened "https://youtu.be/KMBBjzp5hdc" format.

Output Format:
A string containing the extracted YouTube video id.

Sample Input:
https://www.youtube.com/watch?v=RRW2aUSw5vU

Sample Output:
RRW2aUSw5vU
*/
#include <iostream>
#include<string>
using namespace std;
string id(string s){
string k;
for (int i=s.length()-1;i>=0;i--){
if(s[i]=='/'||s[i]=='=') break ;
k+=s[i];
}
return k;
}
int main() {
string s;
getline(cin,s);
string m=id(s);
for(int i=m.length ()-1;i>=0;i--){
cout<<m[i];
}
return 0;
}