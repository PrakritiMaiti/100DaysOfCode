/*
You want to take a list of numbers and find the sum of all of the even numbers in the list. Ignore any odd numbers.

Task:
Find the sum of all even integers in a list of numbers.

Input Format:
The first input denotes the length of the list (N). The next N lines contain the list elements as integers.

Output Format:
An integer that represents the sum of only the even numbers in the list.

Sample Input:
9
1
2
3
4
5
6
7
8
9

Sample Output:
20
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    cout << sum;
    return 0;
}