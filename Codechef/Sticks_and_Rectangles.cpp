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
#define printCase(x) cout << "Case #" << x << ": "

// put function

int32_t main()
{
    int google;
    cin >> google;
    for (int k = 1; k <= google; k++)
    {
        // Read
        int n;
        cin >> n;
        int count = 0;
        vi v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        sort(all(v));
        int i = 0;
        // now need to make pair
        vi ans;
        while (i < n)
        {
            if (v[i] == v[i + 1])
            {
                // cout << v[i] << " ";
                ans.push_back(v[i]);
                ans.push_back(v[i]);
                i += 2;
            }
            else
            {
                ans.push_back(v[i]);
                ans.push_back(v[i]);
                // count++;
                i++;
            }
        }
        // for (auto it : ans)
        // {
        //     cout << it << " ";
        // }
        // cout << '\n';

        int ans1 = ans.size();
        if (ans1 % 4 == 0)
        {
            cout << ans1 - n << "\n";
        }
        else
        {
            int a = ans1 / 4;
            a++;
            ans1 = a * 4;
            cout << ans1 - n << "\n";
        }
    }
    return 0;
}
