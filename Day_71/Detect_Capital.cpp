/*520. Detect Capital
We define the usage of capitals in a word to be right when one of the following cases holds:
All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.
*/
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool ans1=true;
        for(int i=0;i<word.length();i++){
            if(!(word[i]>='A'&&word[i]<='Z')) ans1=false;
        }
        if(ans1) return true;
        
        bool ans2=true;
        for(int i=0;i<word.length();i++){
            if(!(word[i]>='a'&&word[i]<='z')) ans2=false;
        }
        if(ans2) return true;
        
        bool ans3=true;
        if(!(word[0]>='A'&&word[0]<='Z')) return false;
        for(int i=1;i<word.length();i++){
            if(!(word[i]>='a'&&word[i]<='z')) ans3=false;
        }
        if(ans3) return true;
        
        return false;
    }
};