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
        int n, b, x, y;
        cin >> n >> b >> x >> y;
        vi v(n + 1, 0);

        for (int i = 1; i < n + 1; i++)
        {
            if (v[i - 1] + x > b)
            {
                v[i] = v[i - 1] - y;
            }
            else
            {
                v[i] = v[i - 1] + x;
            }
        }
        int sum = 0;
        for (auto it : v)
        {
            sum += it;
        }
        cout << sum << "\n";
    }
    return 0;
}
