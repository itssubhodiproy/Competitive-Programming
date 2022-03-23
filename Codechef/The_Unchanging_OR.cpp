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
unsigned highestPowerof2(unsigned x)
{
    // check for the set bits
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;

    // Then we remove all but the top bit by xor'ing the
    // string of 1's with that string of 1's shifted one to
    // the left, and we end up with just the one top bit
    // followed by 0's.
    return x ^ (x >> 1);
}
// check for the 2th power
int clz(int N)
{
    return N ? 32 - __builtin_clz(N) : -1e9;
}


int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        if (n <= 2)
        {
            cout << 0 << "\n";
            continue;
        }
        n++;
        n = highestPowerof2(n);
        cout << clz(n) - 2 << "\n";
    }
    return 0;
}
