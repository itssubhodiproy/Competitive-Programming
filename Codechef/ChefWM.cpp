
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        ll ans = 0;
        vector<ll> vec;
        ll fina = 0;
        cin >> n >> m;
        ll remem = m;
        for (ll i = 2; i * i <= m; i++)
        {
            if (!(remem % i))
            {
                ans++;
                while (!(remem % i))
                {
                    remem /= i;
                }
            }
        }
        
        if (remem > 1)
            ans++;
        for (ll i = 1; i * i <= n; i++)
        {
            if (!(n % i))
            {
                vec.push_back(i);
                if (i != (n / i))
                {
                    vec.push_back(n / i);
                }
            }
        }

        for (auto x : vec)
        {
            if (x <= ans)
                fina = x;
        }
        cout << fina << endl;
    }
    return 0;
}
