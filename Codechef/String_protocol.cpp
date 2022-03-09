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
        string s;
        cin >> s;
        int i = 0;
        int count = 0;
        while (i < n)
        {
            if (s[i] == s[i + 1])
            {
                count++;
                i += 2;
            }
            else
            {
                count++;
                i++;
            }
        }
        cout << count << "\n";

        // unordered_map<char, int> m;
        // for (auto it : s)
        // {
        //     m[it]++;
        // }
        // int count = 0;
        // // for (auto it : m)
        // // {
        // //     if ((it.second % 2) == 1)
        // //     {
        // //         count +=( (it.second / 2) + 1);
        // //     }
        // //     else
        // //     {
        // //         count += (it.second / 2);
        // //     }
        // // }
        // for (auto it : m)
        // {
        //     cout << it.first << " ->" << it.second << "\n";
        // }
        // cout << count << "\n";
    }
    return 0;
}
