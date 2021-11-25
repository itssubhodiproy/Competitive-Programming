#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        bool check = false;
        if ((s[s.length() - 1] - '0') % 2 == 0)
        {
            cout << '0' << "\n";
            continue;
        }
        for (ll i = 0; i < s.length(); i++)
        {
            if ((s[i] - '0') % 2 == 0)
            {
                check = true;
            }
        }
        if (check == false)
        {
            cout << "-1"
                 << "\n";
            continue;
        }
        if ((s[0] - '0') % 2 == 0)
        {
            cout << '1' << "\n";
        }
        else
        {
            cout << '2' << "\n";
        }
    }

    return 0;
}