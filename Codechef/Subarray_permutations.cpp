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
        int n, k;
        cin >> n >> k;

        // 1st case
        if (n == 1 && k == 1)
        {
            cout << 1 << "\n";
            continue;
        }
        //2nd case
        else if (n == k)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }
        else if (k == 1)
        {
            cout << -1 << "\n";
            continue;
        }
        else
        {
            vector<int> v;
            for (int i = 1; i < k ; i++)
            {
                v.push_back(i);
            }
            for (int i = n; i >= k; i--)
            {
                v.push_back(i);
            }
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
