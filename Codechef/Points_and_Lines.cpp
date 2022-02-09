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
        set<int> s1, s2;
        while (n--)
        {
            int n1, n2;
            cin >> n1 >> n2;
            s1.insert(n1);
            s2.insert(n2);
        }
        cout << s1.size() + s2.size() << "\n";
    }
    return 0;
}
