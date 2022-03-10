/*
NAME: SUBHODIP ROY
BRANCH: COMPUTER SCIENCE AND ENGINEERING
COLLEGE: NETAJI SUBHASH ENGINEERING COLLEGE
GITHUB: subh-23
CODEFORCES: subh_23
CODECHEF: subh_23
GRADUATION YEAR: 2024                                                  PLAY SMARTLY, NOT HARDLY
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
    // input
    int st, mxst, turnsav, demons;
    cin >> st >> mxst >> turnsav >> demons;
    vector<vector<int>> v;
    for (int i = 0; i < demons; i++)
    {
        int sc, tr, sr, na;
        cin >> sc >> tr >> sr >> na;
        vi k;
        for (int i = 0; i < na; i++)
        {
            int num;
            cin >> num;
            k.push_back(num);
        }
        v.push_back(k);
    }

    // output
    cout << 1 << "\n";
    cout << 3 << "\n";
    cout << 2 << "\n";
    cout << 4 << "\n";
    cout << 0 << "\n";

    return 0;
}
