/*
NAME: SUBHODIP ROY
BRANCH: COMPUTER SCIENCE AND ENGINEERING
COLLEGE: NETAJI SUBHASH ENGINEERING COLLEGE
GITHUB: subh-23
CODEFORCES: subh_23
CODECHEF: subh_23
GRADUATION YEAR: 2024
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define float double
#define all(x) (x).begin(), (x).end()
#define vi vector<int>

// put function

int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int m, c, i, s;
        cin >> m >> c >> i >> s;
        if (c == m / 2)
        {
            if (i == 3 * c)
            {
                if (s < i / 2 && s > c)
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
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}
