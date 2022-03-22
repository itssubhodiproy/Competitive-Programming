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
        int m, n;
        cin >> m >> n;
        if (m == n && m==0)
        {
            cout << "0"
                 << "\n";
            continue;
        }
        int per = pow(m, 2) + pow(n, 2);
        if (ceil((double)sqrt(per)) == floor((double)sqrt(per)))
        {
            cout << "1"
                 << "\n";
            continue;
        }
        else
        {
            cout << "2"
                 << "\n";
        }
    }
    return 0;
}
