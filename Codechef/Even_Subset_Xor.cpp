#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// #define all(x) x.begin(), x.end()
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll count = 0;
        ll i = 1;
        ll n;
        cin >> n;
        vector<ll> v;

        while (count != n)
        {
            if (countSetBits(i) % 2 == 0)
            {
                count++;
                v.push_back(i);
                i++;
            }
            else
                i++;
        }
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
