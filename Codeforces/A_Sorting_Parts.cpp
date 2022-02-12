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
        vector<int> v, k;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        k = v;
        sort(k.begin(), k.end());
        if (v == k)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }
    return 0;
}
