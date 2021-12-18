#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll hole, n;
        cin >> hole >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<ll>());
        for (ll i = 0; i < n; i++)
        {
            arr[i] = hole - arr[i];
        }

        // for (ll i = 0; i < n; i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<"\n";
        ll count = 0;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum >= hole)
            {
                break;
            }
            // if (sum == hole &&  i==arr[i])
            // {
            //     break;
            // }
            count++;
        }
        cout<<count<<"\n";
    }

    return 0;
}