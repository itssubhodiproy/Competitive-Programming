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
int nextPowerOf2(int n)
{
    unsigned count = 0;

    // First n in the below condition
    // is for the case where n is 0
    if (n && !(n & (n - 1)))
        return n;

    while (n != 0)
    {
        n >>= 1;
        count += 1;
    }

    return 1 << count;
}

int nthRoot(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (n == pow(2, i))
        {
            return i;
        }
    }
    return n;
}

int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int h, op;
        cin >> h >> op;
        int tower1step;

        int powerof2 = nextPowerOf2(h);
        int value = nthRoot(powerof2);
        value++;
        op = (op - value);
        if (op < 0)
        {
            cout << 0 << "\n";
        }
        else if (op == 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 1 + op << "\n";
        }
    }
    return 0;
}
