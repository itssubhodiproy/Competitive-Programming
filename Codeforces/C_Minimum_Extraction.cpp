#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mini = INT_MAX;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << arr[0] << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            mini = min(arr[i], mini);
        }
        sort(arr, arr + n);
        int maxi = mini;
        for (int i = 0; i < n - 1; i++)
        {
            mini = max(mini, arr[i + 1] - arr[i]);
        }
        cout << mini << endl;
    }
}
