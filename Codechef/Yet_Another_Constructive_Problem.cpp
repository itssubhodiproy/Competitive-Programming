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
        if (n == 1)
        {
            cout << 1 << " " << 0 << " " << 3 << "\n";
            continue;
        }
        else if (n % 2 == 0)
        {
            cout << n << " " << n + 1 << " " << n + 2 << "\n";
        }
        else
        {
            cout << n << " " << n - 1 << " " << 1 << "\n";
        }
    }
    return 0;
}
