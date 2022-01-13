#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        ll m = n;
        vector<ll> v;
        v.push_back(0);
        while (n--)
        {
            ll num;
            cin >> num;
            v.push_back(num);
        }
        v.push_back(0);
        

        //counting steps
        ll steps = 0;
        for (ll i = 1; i <= m; i++)
        {
            if ((v[i] > v[i - 1]) && (v[i] > v[i + 1]))
            {
                steps += v[i] - max(v[i - 1], v[i + 1]);
            }
        }

        // counting ungliness
        ll ugliness=0;
        for (ll i = 0; i < v.size()-1; i++)
        {
            ugliness+=abs(v[i]-v[i+1]);
        }

        cout<<(ugliness-steps)<<"\n";
    }
    return 0;
}
