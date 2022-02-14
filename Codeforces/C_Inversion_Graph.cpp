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
void dfs(vector<int> &vis, vector<int> v, int maxi, int &count, int i)
{
    if (i == v.size())
        return;

    if (vis[i] == 1)
    {
        count--;
        return;
    }
    if (v[i] <= maxi)
    {
        vis[i] = 1;
    }
    dfs(vis, v, maxi, count, i + 1);
}

int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        vector<int> vis(n, 0);
        int count = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > maxi)
            {
                maxi = v[i];
                dfs(vis, v, maxi, count, i);
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
