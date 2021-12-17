#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        // ll mini = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            // mini = min(mini, arr[i]);
        }
        // if (n % 2 == 0)
        // {
        //     for (ll i = 0; i < n - 1; i++)
        //     {
        //         cout << arr[i + 1] << " " << arr[i];
        //         i++;
        //         cout << "\n";
        //     }
        // }
        // else
        // {
        //     for (ll i = 0; i < n - 2; i++)
        //     {
        //         cout << arr[i + 1] << " " << arr[i];
        //         i++;
        //         cout << "\n";
        //     }
        // }
        sort(arr, arr + n);
        ll ele = n / 2;
        int i = 1;
        while (ele--)
        {
            cout << arr[i] << " " << arr[0];
            cout << "\n";
            i++;
        }
    }

    return 0;
}