#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isprime(int n)
{
    for (ll i = 2; i <= n / 2; ++i)
    {
        // condition for non-prime
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        //Read
        ll n;
        cin >> n;
        vector <ll> v;

        for (ll i = 0; i < n; i++)
        {
            ll num;
            cin >> num;
            v.push_back(num);
        }

        ll sum = 0;
        for (auto it : v)
        {
            sum += it;
        }

        if (sum % v.size() == 0)
        {
            cout << "0"
                 << "\n";
        }
        else
        {
            cout << "1"
                 << "\n";
        }

        // check for the different elements
    }

    return 0;
}