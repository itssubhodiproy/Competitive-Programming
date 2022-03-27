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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string d;
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1] && s[i] == '0')
            {
                count += 2;
            }
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] != s[i + 1] && s[i] != s[i - 1] && s[i] == '1')
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
