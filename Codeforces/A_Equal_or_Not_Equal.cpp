#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll countE = 0;
        string s;
        cin >> s;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == 'N')
            {
                countE++;
            }
        }
        if (countE == 1)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }
    return 0;
}