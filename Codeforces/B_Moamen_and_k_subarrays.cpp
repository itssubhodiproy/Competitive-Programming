#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll count = 0;
        ll arr[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll doctor = 1;
        


        vector<pair<ll,ll>> v;

        for(ll i=0;i<n;i++){
            v.push_back(make_pair(arr[i],i));
        }
        sort(v.begin(),v.end());
        for (ll i = 0; i < n-1; i++)
        {
            if(v[i].second+1!=v[i+1].second){
                doctor++;
            }
        }
        if(doctor<=k){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<'\n';
        }

        // if (count >= (n - k))
        // {
        //     cout << "Yes" << '\n';
        // }
        // else
        // {
        //     cout << "No"
        //          << '\n';
        // }
    }
}
