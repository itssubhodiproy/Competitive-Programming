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
#define mod (int)1e9

// put function

int32_t main()
{
    int testcase;
    cin >> testcase;
    for (int k = 1; k <= testcase; k++)
    {
        // Read
        int arr[3][4];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout << "Case #" << k << ": ";

        // case 1, where impossible
        int sum = 0;
        vi ans;
        for (int j = 0; j < 4; j++)
        {
            int mini = INT_MAX;
            for (int i = 0; i < 3; i++)
            {
                mini = min(arr[i][j], mini);
            }
            ans.push_back(mini);
            sum += mini;
        }
        if (sum < 1e6)
        {
            cout << "IMPOSSIBLE"
                 << "\n";
            continue;
        }
        else if (sum == 1e6)
        {
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
        else if (sum > 1e6)
        {
            // need to subtract dynamically
            int del = sum - 1e6;
            for (int i = 0; i < 4; i++)
            {
                if (del == 0)
                    break;
                else if (del >= ans[i])
                {
                    del -= ans[i];
                    ans[i] = 0;
                }
                else if (del < ans[i])
                {
                    ans[i] -= del;
                    del = 0;
                }
            }

            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
