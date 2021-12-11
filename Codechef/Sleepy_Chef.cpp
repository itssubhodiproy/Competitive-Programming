#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;

        vector<int> v;

        cin >> s;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                v.push_back(i + 1);
            }
        }
        // for (auto i : v)
        // {
        //     cout << i << " ";
        // }
        ll arr[v.size()];
        ll it = 0;
        for (auto i : v)
        {
            arr[it] = i;
            it++;
        }
        ll count = 1;
        ll maxcount = 0;

        if(k==1){
            cout<<v.size()<<"\n";
            continue;
        }
        ll count2=0;int i=0;
        while (i < v.size() - 1)
        {
            if (arr[i + 1] - arr[i] == 1)
            {
                count++;
            }
            if(count==k){
                count2++;
                count=1;i++;
                // cout << count2<< " ";
            }
            else if(arr[i + 1] - arr[i] != 1)
            {
                count = 1;
            }
            i++;
            // maxcount = max(maxcount, count);
        }
        cout << count2<< "\n";
 

    }

    return 0;
}