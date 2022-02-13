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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        int steps = 0;
        int odd = 0;
        int twos = 0;
        int ones = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] == 1)
            {
                ones++;
            }
            if (v[i] % 2 == 1)
            {
                odd++;
            }
        }

        if (ones >= n - 2 || ((n == 3) && (odd == 1)))
        {
            cout << "-1"
                 << "\n";
            continue;
        }

        else
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (v[i] % 2 == 1)
                {
                    steps += (v[i] + 1) / 2;
                }
                else
                {
                    steps += v[i] / 2;
                }
            }
            cout << steps << "\n";
        }
    }
    return 0;
}
