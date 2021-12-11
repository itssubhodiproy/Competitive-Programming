#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for (ll i = 2; i <= n; i++)
        {
            v.push_back(i);
        }
        v.push_back(1);
        for(auto it: v){
            cout<<it<<" ";
        }
        cout<<"\n";
    }

    return 0;
}