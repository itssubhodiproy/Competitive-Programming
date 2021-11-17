#include <bits/stdc++.h>
using namespace std;

bool check(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i-1] % arr[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (check(arr, n))
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}