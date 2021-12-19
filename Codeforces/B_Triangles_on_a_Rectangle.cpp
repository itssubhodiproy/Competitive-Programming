#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll w, h, k, max1, max2, max3, max4;
        cin >> w >> h;
        ll arr[200000];
        cin >> k;
        for (ll i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        max1 = (arr[k - 1] - arr[0]) * h;
        cin >> k;
        for (ll i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        max2 = (arr[k - 1] - arr[0]) * h;
        cin >> k;
        for (ll i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        max3 = (arr[k - 1] - arr[0]) * w;
        cin >> k;
        for (ll i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        max4 = (arr[k - 1] - arr[0]) * w;


        ll maxi = max(max1, max2);
        maxi = max(max3, maxi);
        maxi = max(maxi, max4);
        cout<<maxi<<"\n";
    }
    return 0;
}