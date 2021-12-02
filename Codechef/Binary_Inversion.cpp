#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll no_of_ones(string s)
{
    ll count = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }
    return count++;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll m;
        cin >> m; ///useless
        string arr[n];

        // Using pair //
        vector<pair<ll, string>> p;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // sort(arr, arr + n);

        for (ll i = 0; i < n; i++)
        {
            p.push_back(make_pair(no_of_ones(arr[i]), arr[i]));
            //    p[i].first= no_of_ones(arr[i]);
            //    p[i].second=arr[i];
        }
        sort(p.begin(), p.end());

        string s = "";
        ll valid_zero = 0;
        for (ll i = 0; i < n; i++)
        {
            s += p[i].second;
        }

        //// No of Valid Zeros ///
        bool check = false;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                check = true;
            }
            else if (s[i] == '0' && check)
            {
                valid_zero++;
            }
        }

        // Main logic //
        check = false;
        ll ans = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '1' && check == false)
            {
                check = true;
                ans += valid_zero;
            }
            else if (s[i] == '1' && check)
            {
                ans += valid_zero;
            }
            else if (s[i] == '0' && check)
            {
                valid_zero--;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
//
