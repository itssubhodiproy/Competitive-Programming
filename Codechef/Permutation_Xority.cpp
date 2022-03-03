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
        if (n == 2 || n == 1)
        {
            cout << "-1"
                 << "\n";
            continue;
        }
        if (n % 2 == 1)
        {
            while (n)
            {
                cout << n << " ";
                n--;
            }
            cout << "\n";
        }
        else
        {
            vector<int> v;
            // previous
            v.push_back(2);
            v.push_back(3);
            v.push_back(1);
            v.push_back(4);
            for (int i = 5; i <= n; i++)
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
