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
        if (n % 7 == 0)
        {
            cout << n << '\n';
        }
        else
        {
            int k = 9;
            n /= 10;
            n *= 10;
            while (true)
            {

                if (n % 7 == 0)
                {
                    cout << n << "\n";
                    break;
                }
                else
                {
                    n++;
                }
            }
        }
    }
    return 0;
}
