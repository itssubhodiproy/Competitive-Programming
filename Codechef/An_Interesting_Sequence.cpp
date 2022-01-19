#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// #define all(x) x.begin(), x.end()

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        ll count = 0;
        if (n % 2 == 0)
        {
            while (n %2==0)
            {
                n = n / 2;
                count++;
            }
            cout<<count<<"\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}
