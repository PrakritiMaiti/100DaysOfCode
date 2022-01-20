/*Binary number to decimal number */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int binary_to_decimal(string str)
    {
        int sum = 0, pow = 1;
        for (int i = str.length() - 1; i >= 0; i--)
        {
            if (str[i] == '1')
                sum += pow;
            pow <<= 1;
        }
        return sum;
    }
};

int main()
{

    string str;
    cin >> str;
    Solution ob;
    int ans = ob.binary_to_decimal(str);
    cout << ans << "\n";

    return 0;
}