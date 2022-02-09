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
        int n;
        cin >> n;
        multiset<int> m;
        for (int i = 0; i < n * 2; i++)
        {
            int num;
            cin >> num;
            m.insert(num);
        }
        bool check = true;
        for (int i = 0; i <= n; i++)
        {
            if (m.count(i) == 0)
            {
                check = true;
                break;
            }
            else if (m.count(i) == 1)
            {
                check = false;
                break;
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
