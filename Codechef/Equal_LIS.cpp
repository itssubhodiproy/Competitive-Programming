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

        if (n % 2 == 1)
        {
            cout << "YES"
                 << "\n";
                //  first half
            for (ll i = 1; i <= (n / 2); i++)
            {
                cout << i << " ";
            }
            //middle element
            cout << n << " ";
            //2nd half without n
            for (ll i = n - 1; i > (n / 2); i--)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else if (n != 2 && n % 2 == 0)
        {
            cout << "YES"
                 << "\n";
                //  nth element at first
            cout << (n / 2) << " ";
            //  first half
            for (ll i = 1; i < n / 2; i++)
            {
                cout << i << " ";
            }
            // 2nd half
            for (ll i = n; i > n / 2; i--)
                cout << i << " ";
            cout << "\n";
        }
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}
