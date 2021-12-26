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
        vector<ll> v;
        bool check = false;
        for (ll i = 0; i < n; i++)
        {
            ll input;
            cin >> input;
            v.push_back(input);
        }

        if (v.size() % 2 == 0)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            for (auto i = 0; i < v.size() - 1; i++)
            {
                if (v[i] >= v[i + 1])
                {
                    check = true;
                    break;
                }
            }
            if (check)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }

    return 0;
}