#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        ll gcdeven = arr[0];
        ll gcdodd = arr[1];
        bool check1 = true;
        bool check2 = true;

        for (ll i = 2; i < n; i += 2) // storing the gcd of the even occurences in the array //
        {
            gcdeven = __gcd(gcdeven, arr[i]);
        }

        for (ll i = 3; i < n; i += 2) // storing the gcd of the odd occurences in the array //
        {
            gcdodd = __gcd(gcdodd, arr[i]);
        }

        // After finding the gcd we need to take care whether the evengcd  is fully dividing some numbers
        // with the odd occurences or not and the alternate one vice versa

        for (ll i = 1; i < n; i += 2)
        {
            if (arr[i] % gcdeven == 0)
            {
                check1 = false;
                break;
            }
        }
        if (check1)
        {
            cout << gcdeven << "\n";
            continue;
        }

        for (ll i = 0; i < n; i += 2)
        {
            if (arr[i] % gcdodd == 0)
            {
                check2 = false;
                break;
            }
        }
        if (check2)
        {
            cout << gcdodd << "\n";
            continue;
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}