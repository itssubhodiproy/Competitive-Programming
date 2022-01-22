#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// #define all(x) x.begin(), x.end()

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        if (l == r && l != 1)
        {
            cout << "YES"
                 << "\n";
            continue;
        }
        else if (l == r && l == 1)
        {
            cout << "NO"
                 << "\n";
            continue;
        }
        ll odd = 0;
        // ll ele = (r - l) + 1;

        // odd elements and even once
        if (l % 2 == 0 || r % 2 == 0)
        {
            ll ele = r-l + 1;
            odd = (ele / 2);
        }
        // all odds
        else if (l % 2 == 1 && r % 2 == 1)
        {
            ll ele = r-l+ 1;
            odd = (ele / 2) + 1;
        }

        if (k >= odd)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}
