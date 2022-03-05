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
        vector<int> v;
        int x;
        cin >> x;
        for (int i = 0; i < 3; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        sort(all(v));
        int ans = 0;
        ans += v[1];
        ans += v[0] * (x - 1);
        cout << ans << "\n";
    }
    return 0;
}
