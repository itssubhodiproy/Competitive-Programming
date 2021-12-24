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
        string s;
        cin >> s;
        bool check = false;

        //check for ans of length 1..
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9')
            {
                cout << 1 << "\n";
                cout << s[i] << "\n";
                check = true;
                break;
            }
        }
        if (check)
            continue;

        //check for ans of length 2..
        string sp;
        check = false;
        for (ll i = 0; i < n; i++)
        {
            sp.push_back(s[i]);
            for (ll j = i + 1; j < n; j++)
            {
                sp.push_back(s[j]);
                // cout<<sp<<" ";
                if (isprime(stoi(sp)))
                {
                    cout << 2 << "\n";
                    cout << sp << "\n";
                    check = true;
                    break;
                }
                sp.pop_back();
            }
            if (check)
            {
                break;
            }

            sp.pop_back();
        }

        if (check == false)
        {
            cout << n << "\n";
            cout << s << "\n";
        }
    }

    return 0;
}