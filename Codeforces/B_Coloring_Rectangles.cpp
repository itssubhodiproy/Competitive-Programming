#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        // ll resultn, resultm, ans;
        // if (m <= 2)
        // {
        //     resultm = 1;
        // }
        // if (m > 2)
        // {
        //     resultm = m / 2;
        // }
        // if (n <= 2)
        // {
        //     resultn = 1;
        // }
        // if (n > 2)
        // {
        //     resultn = n / 2;
        // }

        // ans = min(resultn * m, resultm * n);

        // cout << ans << "\n";
        n = n * m;
        if (n % 3 == 0)
            n = n / 3;
        else
        {
            n = (n / 3) + 1;
        }
        cout << n << "\n";
    }
    return 0;
}