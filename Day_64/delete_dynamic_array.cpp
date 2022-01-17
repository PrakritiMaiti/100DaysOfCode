#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // Declaring dynamic 1D array
    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    delete[] arr; //comment this line so memory doesn't get deallocated

    cout << sum << endl;
    cout << arr[0] << endl;

    return 0;
}