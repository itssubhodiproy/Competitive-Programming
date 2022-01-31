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

int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        string s;
        cin >> s;
        int zero = 0;
        int one = 0;
        if (s.length() <= 2)
        {
            cout << 0 << "\n";
            continue;
        }
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
        if (zero == one)
        {
            // 2 cases
            // bool check = true;
            // for (auto i = 0; i < s.length() - 1; i++)
            // {
            //     if (s[i] == s[i + 1])
            //     {
            //         check = false;
            //         break;
            //     }
            // }
            // if (check == false)
            // {
            //     cout << zero - 1 << "\n";
            // }
            // if (check)
            // {
            //     cout << 0 << "\n";
            // }
            cout << zero - 1 << "\n";
            continue;
        }
        else if (zero == 0 || one == 0)
        {
            cout << 0 << "\n";
            continue;
        }
        cout << min(zero, one) << "\n";
    }
    return 0;
}
