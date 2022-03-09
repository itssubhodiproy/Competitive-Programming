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
        // i've taken the input
        int l, r, a;
        cin >> l >> r >> a;
        // initially I'm asuming right will give me my ans;
        int ans = r / a + r % a;
        //last divisible value from r
        int lastdiv = ((r / a) * a) - 1;
        //if the number lastdiv is beyond our range, we won't touch it.
        // if not, then lastdiv is gurranted give our ans
        if (lastdiv >= l)
        {
            ans = max(ans, lastdiv / a + lastdiv % a);
        }
        cout << ans << "\n";
    }
    return 0;
}
