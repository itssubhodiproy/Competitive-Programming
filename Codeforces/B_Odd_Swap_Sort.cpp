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
bool sorted(vector<int> v)
{
    vector<int> even, even1;
    vector<int> odd, odd1;
    for (auto i : v)
    {
        if (i % 2 == 0)
        {
            even.push_back(i);
            even1.push_back(i);
        }
        else
        {
            odd.push_back(i);
            odd1.push_back(i);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    if (even != even1)
    {
        return false;
    }
    if (odd != odd1)
    {
        return false;
    }
    return true;
}
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
        if (sorted(v))
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << "No"
                 << "\n";
        }
        
    }
    return 0;
}
