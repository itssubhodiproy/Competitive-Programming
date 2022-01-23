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
        dd n;
        cin >> n;
        vector<dd> v;
        for (ll i = 0; i < n; i++)
        {
            dd num;
            cin >> num;
            v.push_back(num);
        }
        dd maxi = INT_MIN;
        dd sum = 0;
        for (ll i = 0; i < n; i++)
        {
            maxi = max(maxi, v[i]);
            sum += v[i];
        }
        sum-=maxi;
        dd avg= sum/(n-1);
        cout<<fixed<<setprecision(6)<<avg+maxi<<"\n";
    }

    return 0;
}
