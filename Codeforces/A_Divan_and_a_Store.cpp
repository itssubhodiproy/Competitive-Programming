#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, l, r, k;
        cin >> n >> l >> r >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        queue<ll> valid;
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= l && arr[i] <= r)
            {
                valid.push(arr[i]);
            }
        }
        ll count=0;
        while (!valid.empty())
        {
            if((k-valid.front())<0){
                break;
            }
            k -= valid.front();
            
            count++;
            valid.pop();
            
        }
        cout<<count<<"\n";
    }

    return 0;
} // } Driver Code Ends
