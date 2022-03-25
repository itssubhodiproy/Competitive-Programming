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
        int one = 0;
        vi v;
        unordered_set<int> m;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
            m.insert(num);
            if (num == 1)
            {
                one++;
            }
        }
        if (one == 0)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            bool check = false;

            for (int i = 0; i < n; i++)
            {
                if (m.count(v[i]+1)==1)
                {
                    check = true;
                    // cout << v[i] << " " << v[i + 1] << "\n";
                    break;
                }
            }
            if (check)
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
    }
    return 0;
}
