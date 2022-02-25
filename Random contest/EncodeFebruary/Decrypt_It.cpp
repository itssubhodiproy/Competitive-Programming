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
        string s, s1;
        cin >> s;
        int n;
        cin >> n;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] + n > 122)
            {
                s1.push_back(96+(s[i] + n) % 122);
                // cout << ((s[i] + n) % 122) << "\n";
            }
            else
            {
                s1.push_back(s[i] + n);
            }
        }
        cout << s1 << "\n";
    }
    return 0;
}
