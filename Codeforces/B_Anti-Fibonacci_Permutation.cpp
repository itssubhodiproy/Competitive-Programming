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
        list<int> v;
        for (int i = n; i >= 1; i--)
        {
            v.push_back(i);
        }
        int print = n;
        if (n == 3)
        {
            cout << "3 2 1"
                 << "\n";
            cout << "3 1 2"
                 << "\n";
            cout << "1 3 2"
                 << "\n";
            continue;
        }
        while (print--)
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << "\n";
            int front = v.front();
            v.pop_front();
            v.push_back(front);
        }
    }
    return 0;
}
