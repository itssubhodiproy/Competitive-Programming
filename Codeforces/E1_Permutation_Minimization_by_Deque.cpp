#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        deque<ll> q;

        for (ll i = 0; i < n; i++)
        {
            if (q.empty())
            {
                q.push_back(arr[i]);
            }
            else if (arr[i] >= q.front())
            {
                q.push_back(arr[i]);
            }
            else if (arr[i] < q.front())
            {
                q.push_front(arr[i]);
            }
        }
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop_front();
        }
        cout << "\n";
    }
    return 0;
}