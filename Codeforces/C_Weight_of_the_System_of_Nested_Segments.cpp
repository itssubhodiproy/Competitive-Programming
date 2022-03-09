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
bool sortbysec(const tuple<int, int, int> &a,
               const tuple<int, int, int> &b)
{
    return (get<1>(a) < get<1>(b));
}

int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, m;
        cin >> n >> m;
        vector<tuple<int, int, int>> v;
        for (int i = 1; i <= m; i++)
        {
            int point, weight;
            cin >> point >> weight;
            v.push_back(make_tuple(weight,point,i));
        }

        sort(all(v));
        int sum = 0;
        vector<tuple<int, int, int>> k;
        for (int i = 0; i < 2 * n; i++)
        {
            sum += get<0>(v[i]);
            k.push_back(make_tuple(get<0>(v[i]), (get<1>(v[i])), (get<2>(v[i]))));
        }
        // point wise sort
        sort(k.begin(),k.end(),sortbysec);
        // output
        cout << sum << "\n";
        for (int i = 0; i < n ; i++)
        {
            cout << get<2>(k[i]) << " " << get<2>(k[2*n - 1 - i]) << "\n";
        }
        cout << "\n";
    }
    return 0;
}
