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
        if (k == 0 || k > n)
        {
            cout << -1 << "\n";
            continue;
        }
        vector<int> v;

        // // if odd
        // if (k % 2 == 1)
        // {
        //     for (int i = 1; i <= k; i++)
        //     {
        //         v.push_back(i);
        //     }
        //     for (int i = k + 1; i <= n; i += 2)
        //     {
        //         v.push_back(i + 1);
        //         v.push_back(i);
        //     }
        //     swap(v[0], v[v.size() - 1]);

        //     for (auto it : v)
        //     {
        //         cout << it << " ";
        //     }
        //     cout << "\n";
        // }

        // // if even
        // if (k % 2 == 0)
        // {
        //     for (int i = 1; i <= k; i++)
        //     {
        //         v.push_back(i);
        //     }
        //     for (int i = k + 1; i <= n; i += 2)
        //     {
        //         v.push_back(i + 1);
        //         v.push_back(i);
        //     }
        //     for (auto it : v)
        //     {
        //         cout << it << " ";
        //     }
        //     cout << "\n";
        // }

        if (n % 2 == k % 2)
        {
            for (int i = 1; i <= k; i++)
            {
                v.push_back(i);
            }
            for (int i = k + 1; i <= n; i += 2)
            {

                v.push_back(i + 1);
                v.push_back(i);
            }

            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
        else
        {
            for (int i = 1; i <= k; i++)
            {
                v.push_back(i);
            }
            for (int i = k + 1; i <= n; i += 2)
            {
                if (i == n)
                {
                    v.push_back(i);
                    continue;
                }
                v.push_back(i + 1);
                v.push_back(i);
            }
            swap(v[0], v[v.size() - 1]);
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
