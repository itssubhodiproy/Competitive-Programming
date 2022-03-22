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
// if (s[i] == '(')
//     {
//         // 2op
//         for (int j = i + 1; j < n; j++)
//         {
//             if (s[j] == '(' || s[j] == ')')
//             {
//                 s.erase(i, j - i + 1);
//             }
//         }
//     }
//     else if (s[i] == ')')
//     {
//         // 2op
//         for (int j = i + 1; j < n; j++)
//         {
//             if (s[j] == ')')
//             {
//                 s.erase(i, j - i + 1);
//             }
//         }
//     }

int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char c = s[0];
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if (c == ')' && s[i] == ')')
            {
                count++;
                // s = s.substr(i + 1);
                s[i] = '1';
                if (i + 1 < n)
                {
                    c = s[i + 1];
                    i++;
                }

                // remove the string and add count++;
            }
            else if (c == '(' && (s[i] == '(' || s[i] == ')'))
            {
                count++;
                s[i] = '1';
                if (i + 1 < n)
                {
                    c = s[i + 1];
                    i++;
                }
                // s = s.substr(i + 1);
            }
            else
            {
                s[i] = '0';
            }
        }
        int length = 0;
        // remaining part
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                break;
            }
            else{
                length++;
            }
        }
        // cout << s << "\n";
        cout << count << " " << length << "\n";
    }
    return 0;
}
