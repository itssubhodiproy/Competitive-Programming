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
        int b, c;
        cin >> b >> c;
        // for (int i = 1; i <= c; i++)
        // {
        //     if ((i * b) % c == 0)
        //     {
        //         cout << i << "\n";
        //         break;
        //     }
        // }
        // continue;
        int Gcd = __gcd(b, c);
        c /= Gcd;
        cout << c << "\n";
    }
    return 0;
}
