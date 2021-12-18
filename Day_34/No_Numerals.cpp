/*
You write a phrase and include a lot of number characters (0-9), but you decide that for numbers 10 and under you would rather write the word out instead. Can you go in and edit your phrase to write out the name of each number instead of using the numeral?

Task:
Take a phrase and replace any instances of an integer from 0-10 and replace it with the English word that corresponds to that integer.

Input Format:
A string of the phrase in its original form (lowercase).

Output Format:
A string of the updated phrase that has changed the numerals to words.

Sample Input:
i need 2 pumpkins and 3 apples

Sample Output:
i need two pumpkins and three apples
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] > 47 && s[i] < 58)
        {
            switch (s[i])
            {
            case '1':
                if (s[i + 1] == '0')
                {
                    cout << "ten";
                }
                else
                {
                    cout << "one";
                }
                break;
            case '2':
                cout << "two";
                break;
            case '3':
                cout << "three";
                break;
            case '4':
                cout << "four";
                break;
            case '5':
                cout << "five";
                break;
            case '6':
                cout << "six";
                break;
            case '7':
                cout << "seven";
                break;
            case '8':
                cout << "eight";
                break;
            case '9':
                cout << "nine";
                break;
            case '0':
                if (s[i - 1] == '1')
                {
                    // cout <<"ten";
                }
                else
                {
                    cout << "zero";
                }
                break;
            }
        }
        else
        {
            cout << s[i];
        }
    }
    return 0;
}