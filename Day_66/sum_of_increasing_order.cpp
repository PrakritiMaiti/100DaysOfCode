/*Given n arrays of size m each. Find maximum sum obtained by selecting a number from each array such that the element selected from the i-th array is more than the element selected from (i-1)-th array. If maximum sum cannot be obtained then return 0.
 */
#include <bits/stdc++.h>
using namespace std;

int maximumSum(int n, int m, vector<vector<int>> &a);

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    cout << maximumSum(n, m, arr) << endl;

    return 0;
}

int maximumSum(int n, int m, vector<vector<int>> &arr)
{

    int maxi = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        maxi = max(maxi, arr[n - 1][i]);
    }
    int res = maxi;
    for (int i = n - 2; i >= 0; i--)
    {
        int temp = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < maxi)
            {
                temp = max(temp, arr[i][j]);
            }
        }
        if (temp == 0)
        {
            return 0;
        }
        maxi = temp;
        res += temp;
    }
    return res;
}