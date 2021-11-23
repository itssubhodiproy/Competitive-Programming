#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll ten = 10;
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        ll arr1[n - 1];
        k++;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (ll i = 0; i < n - 1; i++)
        {
            arr1[i] = ((ll)(pow(ten, arr[i + 1] - arr[i]))) - 1;
        }
        ll sum = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            sum += arr1[i];
        }
        ll ans = 0;
        ll ans1 = 0;
        ll curr = 0;

        if (sum > k)
        {
            for (ll i = 0; i < n; i++)
            {
                curr += arr1[i];

                // if (curr > k)
                // {
                //     ans = abs(k - arr1[i]);
                //     ans1 += ((ll)(pow(ten, arr[i]))) * ans;
                //     break;
                // }
                ll curr1;
                if (curr > k)
                {   
                    curr = curr - arr1[i];
                    ans = curr + abs(k - curr);
                    ans1 += ((ll)(pow(ten, arr[i]))) * abs(k - curr);
                    break;
                }

                ans1 += ((ll)(pow(ten, arr[i]))) * arr1[i];
            }
            cout << ans1 << "\n";
        }

        else if (sum == k)
        {
            for (ll i = 0; i < n - 1; i++)
            {
                ans1 += ((ll)(pow(ten, arr[i]))) * arr1[i];
            }
            cout << ans1 << "\n";
        }

        else if (sum < k)
        {
            for (ll i = 0; i < n - 1; i++)
            {
                ans1 += (ll)((ll)(pow(ten, arr[i]))) * arr1[i];
                ans+=arr1[i];
            }
            ans1 += (ll)((ll)(pow(ten, arr[n-1]))) * (k - ans);
            cout << ans1 << "\n";
        }
    }
    return 0;
}