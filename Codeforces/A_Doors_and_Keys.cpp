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
        unordered_set<char> st;
        bool check = true;
        for (auto it : s)
        {
            if (it >= 97)
            {
                st.insert(it);
            }
            else
            {
                if (st.count(it + 32) == 1)
                {
                    continue;
                }
                else
                {
                    check = false;
                    break;
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
