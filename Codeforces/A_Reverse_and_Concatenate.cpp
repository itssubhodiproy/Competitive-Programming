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
#define dd double

// put function
bool palindrome(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (palindrome(s))
        {
            cout << 1 << "\n";
        }
        else
        {
            if (k == 0)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 2 << "\n";
            }
        }
    }
    return 0;
}
