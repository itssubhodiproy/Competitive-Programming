#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;                             // TLE //
    while (t--)
    {
        ll x1, x2;
        ll p1,p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;

        

        ll n1 = p1;
        ll n2 = p2;
        ll ans1 = 1;
        ll ans2 = 1;

        if (n1 == 0)
        {
            ans1 = 0;
        }
        if (n1 != 0)
        {
            ans1 = pow(10, n1);
        }

        if (n2 == 0)
        {
            ans2 = 0;
        }
        if (n2 != 0)
        {
            ans2 = pow(10, n2);
        }

        // cout<<ans1<<"\n";

        // cout<<"\n";

        // cout<<ans2<<"\n";

        if (p1 > 0)
        {
            x1 = x1 * ans1;
        }
        if (p2 > 0)
        {
            x2 = x2 * ans2;
        }

        if ((x1) > (x2))
        {
            cout << '>' << "\n";
        }
        else if ((x1) == (x2))
        {
            cout << '=' << "\n";
        }
        else if ((x1) < (x2))
        {
            cout << '<' << "\n";
        }
    }

    return 0;
}