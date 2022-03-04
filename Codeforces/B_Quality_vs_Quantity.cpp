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
        int n;
        vi v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        sort(all(v));

        bool check = false;
        int pointer1 = 1;
        int pointer2 = n - 2;
        int sum1 = v[0];
        int sum2 = v[n - 1];
        int count1 = 1;
        int count2 = 1;
        while (true)
        {
            if (count1 > count2 && sum2 > sum1)
            {
                check = true;
                break;
            }
            if (pointer1 > pointer2)
            {
                break;
            }
            else if (count1 == count2)
            {
                sum1 += v[pointer1];
                // cout << "sum1 " << sum1 << "\n";
                pointer1++;
                count1++;
            }
            else
            {
                sum2 += v[pointer2];
                // cout << "sum2 " << sum2 << "\n";
                pointer2--;
                count2++;
            }
        }
        if (check)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}
