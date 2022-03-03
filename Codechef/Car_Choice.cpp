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
        float x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        if (x1 / y1 > x2 / y2)
        {
            cout << "-1"
                 << "\n";
        }
        else if (x1 / y1 < x2 / y2)
        {
            cout << "1"
                 << "\n";
        }
        else
        {
            cout << "0"
                 << "\n";
        }
    }
    return 0;
}
