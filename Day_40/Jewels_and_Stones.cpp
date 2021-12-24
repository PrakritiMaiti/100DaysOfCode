/* 771. Jewels and Stones
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

 

Example 1:

Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
Example 2:

Input: jewels = "z", stones = "ZZ"
Output: 0
*/
#include<iostream>
#include<string>
using namespace std;
int numJewelsInStones(string j, string s) {
        int count=0;
        for(int i=0;i<j.length();i++){
            for(int k=0;k<s.length();k++){
                if(j[i]==s[k]) count++;
            }
        }
        return count;
    }
int main(){
    string s,k;
    cin>>s>>k;
    cout<<numJewelsInStones(s,k);
    return 0;
}