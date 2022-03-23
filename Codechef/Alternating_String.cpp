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
        int p = 86;
        int n;
        cin >> n;
        p++;
        string s;
        cin >> s;
        int sum = p;
        int zero = 0;
        int one = 0;
        for (auto it : s)
        {
            if (it == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        int ans = min(zero, one);
        p+=2;
        ans *= 2;
        if (zero == one)
        {
            cout << ans << "\n";
        }
        else
        {
            ans++;
            cout << ans << "\n";
        }
    }
    return 0;
}
