

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
// #define all(x) x.begin(), x.end()

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {

        ll n;
        cin >> n;
        ll even = 2, odd = 1;
        vector<ll> ans;

        for (ll i = 1; i <= n; i++)
        {
            if (i % 2)
            {
                ans.push_back(even);
                even += 2;
            }
            else
            {
                ans.push_back(odd);
                odd += 2;
            }
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << "\n";
    }

    return 0;
}
