/*Professor McGonagall teaches transfiguration at Hogwarts. She has given Harry the task of changing himself into a cat. She explains that the trick is to analyze your own DNA and change it into the DNA of a cat. The transfigure spell can be used to pick any one character from the DNA string, remove it and insert it in the beginning. 
Help Harry calculates minimum number of times he needs to use the spell to change himself into a cat.
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	if(A.length()!=B.length()) return -1;
    	int n = A.length(), i = 0, j = n, sum = 0,cnt = 0;
    	while(i<n){
    	    sum+=A[i];
    	    sum-=B[i];
    	    i++;
    	}
    	                    
    	if(sum!=0) return -1;
    	
    	while(i>=0 && j>=0){
    	    if(A[i]==B[j]) i--, j--;
    	    else cnt++,i--;
    	}
    	return cnt;
    }
};

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
} 