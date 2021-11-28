#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll m, p, q, x, y, r;
        cin >> m >> p >> x >> q >> y >> r;
        ll arr[p];
        ll maxi = INT_MIN;
        for (ll i = 0; i < p; i++)
        {
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }
        ll diff = (maxi - m) + 1;

        // cout << diff << "\n";

        ll st1, st2;

        if (diff % x != 0 && diff % y != 0)
        {
            // cout << diff % x << " " << diff % y << "\n";
            st1 = (diff / x) +1;
            st2 = (diff / y) +1;
            // cout << st1 + 1 << " " << st2 + 1 << "\n";
        }
        else if (diff % x == 0 && diff % y == 0)
        {
            // cout << diff % x << " " << diff % y << "\n";
            st1 = (diff / x);
            st2 = (diff / y);
            // cout << st1 << " " << st2 << "\n";
        }
        else if (diff % x == 0 && diff % y != 0)
        {
            // cout << diff % x << " " << diff % y << "\n";
            st1 = (diff / x);
            st2 = (diff / y) + 1;
            // cout << st1 << " " << st2 << "\n";
        }
        else if (diff % x != 0 && diff % y == 0)
        {
            // cout << diff % x << " " << diff % y << "\n";
            st1 = (diff / x) + 1;
            st2 = (diff / y);
            // cout << st1 << " " << st2 << "\n";
        }

        cout << min(st1 * q, st2 * r) << "\n";
    }

    return 0;
}