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
        char c;
        cin >> s >> c;

        int index = -1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c && (i + 1) % 2 == 1)
            {
                index = i + 1;
            }
        }
        if (index == -1)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
    return 0;
}
