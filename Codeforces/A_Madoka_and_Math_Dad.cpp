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
        vector<int> s;

        //
        int sum = 0;
        bool check = false;
        // two cases
        vector<int> v1;
        vector<int> v2;
        while (true)
        {
            if (sum < n)
            {
                v1.push_back(2);
                sum += 2;
                if (sum == n)
                {
                    check = true;
                    break;
                }
                if (sum > n)
                {
                    break;
                }
            }
            if (sum < n)
            {
                v1.push_back(1);
                sum += 1;
                if (sum == n)
                {
                    check = true;
                    break;
                }
                if (sum > n)
                {
                    break;
                }
            }
        }
        if (check)
        {
            for (auto it : v1)
            {
                cout << it;
            }
            cout << "\n";
        }
        else
        {
            sum = 0;
            while (true)
            {

                if (sum < n)
                {
                    v2.push_back(1);
                    sum += 1;
                    if (sum == n)
                    {
                        check = true;
                        break;
                    }
                    if (sum > n)
                    {
                        break;
                    }
                }
                if (sum < n)
                {
                    v2.push_back(2);
                    sum += 2;
                    if (sum == n)
                    {
                        check = true;
                        break;
                    }
                    if (sum > n)
                    {
                        break;
                    }
                }
            }
            for (auto it : v2)
            {
                cout << it;
            }
            cout << "\n";
        }
    }
    return 0;
}
