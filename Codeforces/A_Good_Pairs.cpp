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
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
            maxi = max(maxi, num);
            mini = min(mini, num);
        }
        int ind1, ind2;
        ind1 = ind2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (maxi == v[i])
            {
                ind2 = i + 1;
            }
            if (mini == v[i])
            {
                ind1 = i + 1;
            }
        }
        cout << ind1 << " " << ind2 << "\n";
    }
    return 0;
}
