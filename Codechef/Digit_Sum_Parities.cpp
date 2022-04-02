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
        string s1;
        cin >> s1;
        int f_dig = stoi(s1);
        int s_dig = stoi(s1);
        s_dig++;
        string s2 = to_string(s_dig);

        int f_sum = 0, s_sum = 0;
        for (auto it : s1)
        {
            f_sum += it - '0';
        }
        for (auto it : s2)
        {
            s_sum += it - '0';
        }
        if (f_sum % 2 != s_sum % 2)
        {
            cout << s_dig << "\n";
        }
        else
        {
            s_dig++;
            cout << s_dig << '\n';
        }
    }
    return 0;
}
