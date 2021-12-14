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
        ll third = INT_MIN;
        ll arr[7];
        for (ll i = 0; i < 7; i++)
        {
            cin >> arr[i];
            third = max(third, arr[i]);
        }

        ll first = arr[0];
        ll second = arr[1];

        // cout << third;

        ll resultarr[3];
        resultarr[0] = first;
        resultarr[1] = second;
        resultarr[2] = third - (first + second);

        for (ll i = 0; i < 3; i++)
        {
            cout << resultarr[i] << " ";
        }
        cout<<"\n";
    }

    return 0;
} // } Driver Code Ends