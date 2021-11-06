#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll odd = 0;
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1)
            {
                odd++;
            }
        }

        // while (odd > 1)
        // {
        //     odd--;
        //     count++;
        // }
        if (odd % 2 != 0)
            odd--;
        cout << odd / 2 << endl;
    }
    return 0;
}