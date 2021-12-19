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
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        vector<ll> a;
        vector<ll> b;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                a.push_back(arr[i]);
            }
            else
            {
                b.push_back(arr[i]);
            }
        }
        // for (auto i : a)
        // {
        //     cout << i << " ";
        // }
        // cout << "\n";
        // for (auto i : b)
        // {
        //     cout << i << " ";
        // }
        // cout << "\n";
        // cout << "\n";
        ll point1;
        ll point2;
        // cout << a.size() << "\n";
        // cout << b.size() << "\n";
        if (a.size() <= 2)
            point1 = 0;

        if (a.size() > 2 && a.size() % 2 == 0)
            point1 = (a.size() / 2) - 1;

        if (a.size() > 2 && a.size() % 2 != 0)
            point1 = (a.size() / 2);

        if (b.size() <= 2)
            point2 = 0;

        if (b.size() > 2 && b.size() % 2 == 0)
            point2 = (b.size() / 2) - 1;

        if (b.size() > 2 && b.size() % 2 == 1)
            point2 = (b.size() / 2);

        // cout << point1 << " " << point2 << "\n";

        // cout << "\n";
        // cout << "\n";

        // cout << a.size() << "\n";

        // cout <<b.size()<< "\n";
        cout << abs(a[point1] - b[point2]) << "\n";
    }
    return 0;
}