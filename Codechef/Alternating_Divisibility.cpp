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

        // edgecase
        if (n == 1)
        {
            cout << 2 << "\n";
            continue;
        }

        vi v;
        // v.push_back(2);

        // int i = 3;
        int sizze = n;
        while (v.size() < sizze)
        {

            // first time
            // if (v.size() == 1)
            // {
            //     v.push_back(n * 2);
            //     continue;
            // }
            v.push_back(n);
            v.push_back(n * 2);
            n--;
        }

        if (sizze % 2 == 1)
        {
            v.pop_back();
        }

        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
    return 0;
}
