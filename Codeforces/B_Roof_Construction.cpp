
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
// C++ program to find highest power of 2 smaller
// than or equal to n.
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

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n; //15/
        if (n == 2)
        {
            for (int i = 0; i < n; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }
        vector<int> v;
        int num = highestPowerof2(n - 1);
        for (int i = 1; i <= num - 1; i++)
        {
            v.push_back(i);
        }
        v.push_back(0);

        v.push_back(num);

        // remaining
        for (int i = num + 1; i < n; i++)
        {
            v.push_back(i);
        }

        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << '\n';
    }
    return 0;
}
