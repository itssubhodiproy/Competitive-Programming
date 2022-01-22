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
        ll n,k;
        cin>>n>>k;
        vector<ll>v1;
        vector<ll> v2;
        for(ll i=0;i<n;i++){
            ll num;cin>>num;
            v1.push_back(num);
        }
        for(ll i=0;i<n;i++){
            ll num;cin>>num;
            v2.push_back(num);
        }
        vector<pair<ll,ll>> v3;
        for (ll i = 0; i < n; i++)
        {
            v3.push_back(make_pair(v1[i],v2[i]));
        }
        sort(v3.begin(),v3.end());

        for(ll i=0;i<n;i++){
            if(v3[i].first<=k){
                k+=v3[i].second;
            }
        }
        cout<<k<<"\n";
         
    }

    return 0;
}
