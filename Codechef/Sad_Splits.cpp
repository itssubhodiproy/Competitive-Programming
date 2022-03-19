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
        string s;
        cin >> s;
        int even = 0;
        int odd = 0;
        int zero = 0;
        bool check = false;
        int d = s[s.length() - 1] - '0';
        // if even, then need to check atleast one even element
        if (d % 2 == 0)
        {
            for (int i = 0; i < s.length() - 1; i++)
            {
                if ((s[i] - '0') % 2 == 0)
                {
                    check = true;
                }
            }
        }
        else if (d % 2 == 1)
        {
            for (int i = 0; i < s.length() - 1; i++)
            {
                if ((s[i] - '0') % 2 == 1)
                {
                    check = true;
                }
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
    return 0;
}
