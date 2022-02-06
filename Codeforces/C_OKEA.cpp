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

int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int num1 = 1;
        int num2 = 2;
        int n, m;
        cin >> n >> m;
        int arr[n][m];

        if (n % 2 == 0 || m == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                { // odd numbers

                    for (int j = 0; j < m; j++)
                    {
                        arr[i][j] = num1;
                        num1 += 2;
                    }
                    // num1+=2;
                }
                else
                {
                    for (int j = 0; j < m; j++)
                    {
                        arr[i][j] = num2;
                        num2 += 2;
                    }
                    // num2+=2;
                }
            }
            cout << "YES"
                 << "\n";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << "\n";
            }
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
        return 0;
    }
