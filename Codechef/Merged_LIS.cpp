#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
// #define all(x) x.begin(), x.end()

ll func(vector<ll> v)
{
    multiset<ll>::iterator it;
    multiset<ll> s;
    ll j = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        j++;
        s.insert(v[i]);
        it = s.upper_bound(v[i]);
        if (it != s.end())
            s.erase(it);
    }
    ll ans = j;
    return s.size();
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m;
        cin >> n >> m;
        ll ans1 = 0;
        ll ans2 = 0;
        vector<ll> v1, v2;
        for (ll i = 0; i < n; i++)
        {
            ll num;
            cin >> num;
            v1.push_back(num);
        }
        for (ll j = 0; j < m; j++)
        {
            ll num;
            cin >> num;
            v2.push_back(num);
        }
        ll l = func(v1);
        ll r = func(v2);
        ll ans=l+r;
        cout << ans << endl;
    }
    return 0;
}
