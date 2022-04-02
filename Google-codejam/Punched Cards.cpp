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
        int r, c;
        cin >> r >> c;
        r *= 2;
        c *= 2;
        r++;
        c++;
        char arr[r][c];

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                // if both are even, put'+';
                if (i % 2 == 0 && j % 2 == 0)
                {
                    arr[i][j] = '+';
                }
                // if both are odd, put'.';
                else if (i % 2 == 1 && j % 2 == 1)
                {
                    arr[i][j] = '.';
                }
                // if i is even and j is odd, put'-';
                else if (i % 2 == 0 && j % 2 == 1)
                {
                    arr[i][j] = '-';
                }
                // if both are even, put'+';
                else if (i % 2 == 1 && j % 2 == 0)
                {
                    arr[i][j] = '|';
                }
            }
        }

        // top left change
        arr[0][0] = '.';
        arr[0][1] = '.';
        arr[1][0] = '.';

        cout << "Case #" << k << ":"
             << "\n";

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << arr[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}
