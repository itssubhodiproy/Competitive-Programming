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
        vi l, r;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            l.push_back(num);
        }
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            r.push_back(num);
        }
        int cost = 0;
        int top = 0;
        int i = 0;
        while (i < n - 1)
        {
            cost += min(r[i], l[i + 1]);
            i++;
        }
        cout << cost << "\n";
    }
    return 0;
}
