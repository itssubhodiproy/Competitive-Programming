#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0;
    ll count = 1;

    for (ll i = 0; i < n; i++)
    {
        if ((m - sum) >= arr[i])
            sum += arr[i];
        else
        {
            sum = arr[i];
            count++;
        }
    }

    cout << count << '\n';
}
