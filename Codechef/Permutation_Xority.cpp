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
        if (n % 2 == 1)
        {
            while (n)
            {
                cout << n << " ";
                n--;
            }
            cout << "\n";
        }
        else
        {
            deque<int> v;
            // previous
            int i = n / 2;
            while (true)
            {
                v.push_front(i);

                if (i == n - 1)
                {
                    break;
                }
                i++;
            }
            v.push_back(n);
            i = n / 2 - 1;
            while (true)
            {
                v.push_back(i);

                if (i == 1)
                {
                    break;
                }
                i--;
            }

            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
