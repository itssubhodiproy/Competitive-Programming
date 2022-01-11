#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, ll> m;
        for (ll i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        ll twos = 0;
        ll ones = 0;
        ll ans = 0;
        for (auto it : m)
        {
            twos += it.second / 2;
            ones += it.second % 2;
        }
            ans += (twos / k) * 2;
            if (((twos % k) * 2 + ones) >= k)
                ans++;
            cout << ans << endl;
        
    }
    return 0;
}
