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
        int n;
        cin >> n;
        int count = 1;
        if (pow(3, n - 1) > 387420489)
        {
            cout << "NO"
                 << "\n";
            continue;
        }
        cout << "YES"
             << "\n";
        for (int i = 1; i <= n; i++)
        {
            cout << count << " ";
            count *= 3;
        }
        cout << "\n";
    }
    return 0;
}
