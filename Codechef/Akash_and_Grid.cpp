#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll nn, xx, yy;
        cin >> nn >> xx >> yy;
        if ( (xx == nn && yy == nn) || (xx == 1 && yy == 1) || (xx == nn && yy == 1 ) || (xx == 1 && yy == nn) )
        {
            cout << 0<< endl;
        }

        else
        {
            ll middle = (nn / 2) + 1;
            ll ans1 = abs(middle - xx), ans2 = abs(middle - yy);

            if ((ans1+ ans2) % 2)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

}
