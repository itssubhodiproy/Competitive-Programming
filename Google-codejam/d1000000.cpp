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
        vi v;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        printCase(k);
        sort(all(v));
        int count = 0, desire = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= desire)
            {
                desire++;
                count++;
            }
            // cout << count << "\n";
        }
        cout << count << '\n';
    }
    return 0;
}
