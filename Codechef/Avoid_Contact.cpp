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
        int n1, n2;
        cin >> n1 >> n2;
        int chicken = n2 * 2;
        int good = n1 - n2;
        if (good == 0)
        {
            chicken--;
        }
        cout << chicken + good << "\n";
    }
    return 0;
}
