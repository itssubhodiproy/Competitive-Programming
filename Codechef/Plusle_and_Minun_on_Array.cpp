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
        vi v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(abs(num));
        }

        int minind = 0, maxind = 0;
        int minval = LLONG_MAX, maxval = LLONG_MIN;

        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0 && v[i] < minval)
            {
                minval = v[i];
                minind = i;
            }
            else if (i % 2 != 0 && v[i] > maxval)
            {
                maxval = v[i];
                maxind = i;
            }
        }
        if (v[maxind] > v[minind])
        {
            swap(v[minind], v[maxind]);
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum += v[i];
            }
            else
            {
                sum -= v[i];
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
