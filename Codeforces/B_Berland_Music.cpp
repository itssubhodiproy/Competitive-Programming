#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        // Read
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string s;
        cin >> s;
        vector<ll> v1;
        vector<ll> v2;
        ll count = 1;

        //pushing the dislike songs
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                v2.push_back(arr[i]);
                // count++;
            }
        }
        //pushing the like songs
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                v1.push_back((arr[i]));
                // count++;
            }
        }
        // sort them both
        sort(v2.begin(), v2.end());
        sort(v1.begin(), v1.end());
        vector<pair<ll, ll>> final;
        // pushing them in a final vector and assigning them with coresponding count pair
        for (ll i = 0; i < v2.size(); i++)
        {
            final.push_back(make_pair(v2[i], count));
            count++;
        }
        for (ll i = 0; i < v1.size(); i++)
        {
            final.push_back(make_pair(v1[i], count));
            count++;
        }

        // Assigning both values to the map
        map<ll, ll> m;
        for (auto it : final)
        {
            m.insert({it.first, it.second});
        }
        for (ll i = 0; i < n; i++)
        {
            arr[i] = m[arr[i]];
        }

        for (ll i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";

        
    }

    return 0;
}