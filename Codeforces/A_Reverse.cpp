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
        int n;
        cin >> n;
        vector<int> v, k;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        k = v;
        sort(k.begin(), k.end());
        if (v == k)
        {
            for (auto i : v)
            {
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }

        int start, end;
        for (int i = 0; i < n; i++)
        {
            if (k[i] != v[i])
            {
                start = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (k[start] == v[i])
            {
                end = i;
                break;
            }
        }

        // sort(v.begin(), v.end());
        int first = start;
        int last = end;
        // while (start <= end)
        // {
        //     swap(v[start], v[end]);
        //     start++;
        //     end--;
        // }
        reverse(v.begin() + start, v.begin() + end + 1);
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
    return 0;
}
