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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        int sum = 0;
        int ans = 0;
        int noofzero = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            ans = 0;
            count = 1;
            noofzero = 0;
            for (int j = i; j < n; j++)
            {
                if (v[j] == 0)
                {
                    noofzero++;
                }
                ans += (count) + noofzero;
                count++;
            }
            sum += ans;
        }
        cout << sum << "\n";
    }
    return 0;
}
