#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll Sum(ll arr[], ll n)
{
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

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
        double sum = Sum(arr, n);
        double require = (sum - ((n - 2) * (sum / n)));
        ll count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (require == arr[i] + arr[j])
                {
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}