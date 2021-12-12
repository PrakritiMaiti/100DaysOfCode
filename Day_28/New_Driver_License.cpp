/*
You have to get a new driver's license and you show up at the office at the same time as 4 other people. The office says that they will see everyone in alphabetical order and it takes 20 minutes for them to process each new license. All of the agents are available now, and they can each see one customer at a time. How long will it take for you to walk out of the office with your new license?

Task
Given everyone's name that showed up at the same time, determine how long it will take to get your new license.

Input Format
Your input will be a string of your name, then an integer of the number of available agents, and lastly a string of the other four names separated by spaces.

Output Format
You will output an integer of the number of minutes that it will take to get your license.

Sample Input
'Eric'
2
'Adam Caroline Rebecca Frank'

Sample Output
40
*/
#include <iostream>
#include <string>
using namespace std;
// int search(string n,string n1);
int main()
{
    string n;
    cin >> n;
    int a;
    cin >> a;
    string n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    int count = 1;
    // for(int i=0;i<n.length();i++){
    // search(n,n1);
    if (n > n1)
        count++;
    if (n > n2)
        count++;
    if (n > n3)
        count++;
    if (n > n4)
        count++;
    // }
    if (a > 5)
        a = 5;
    count /= a;
    if (count == 0)
        count = 1;
    cout << count * 20;
    return 0;
}