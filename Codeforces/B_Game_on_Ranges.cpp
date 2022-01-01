#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll l, r;
        ll arr[1000];
        memset(arr, -1, 1000);
        vector<pair<ll, pair<ll, ll>>> p;
        // vector<pair<pair<ll,ll>,vector<ll>>> v;
        while (n--)
        {
            cin >> l >> r;
            p.push_back(make_pair(r-l, (make_pair(l, r))) );
        }
        sort(p.begin(),p.end());
        
        
        for (ll i=0;i<p.size();i++){
            for (ll j = p[i].second.first; j<=p[i].second.second; j++)
            {
                if(arr[j-1]==-1){
                    arr[j-1]=j;
                    cout<<p[i].second.first<<" "<<p[i].second.second<<" "<<j<<"\n"; break;
                }
            }
            
        }
        cout<<"\n";
        
        
    }
    return 0;
}