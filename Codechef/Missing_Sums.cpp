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
        int num = 1;
        for (ll i = 1; i <= n; i++)
        {
            cout << num << " ";
            num += 2;
        }
    }
    return 0;
}