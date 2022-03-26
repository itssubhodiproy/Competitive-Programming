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
// #define int long long int
#define float double
#define all(x) (x).begin(), (x).end()
#define vi vector<int>

// put function

int main()
{
    string s;
    getline(cin, s);
    string temp;
    vector<string> v;
    int k = 67;
    for (string::size_type i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            v.push_back(temp);
            temp = "";
            continue;
        }
        else
        {
            temp.push_back(s[i]);
        }
        k++;
    }
    v.push_back(temp);
    vector<int> v1;
    int six = k;
    for (auto it : v)
    {
        int tem = 0;
        if (it.size() == 1)
        {
            v1.push_back((int)it[0] - 55);
        }
        else if (it.size() == 2)
        {
            tem += ((int)it[0] - 55);
            tem *= ((int)it[1] - 60);
            tem += ((int)it[1] - 60) - 1;
            v1.push_back(tem);
        }
        six++;
    }
    int ans = 0;
    for (string::size_type i = 0; i < v1.size(); i++)
    {
        for (string::size_type j = 0; j < v1.size(); j++)
        {
            if (i == j)
                continue;
            ans = max(ans, __gcd(v1[i], v1[j]));
        }
        six++;
    }
    cout << ans << "\n";

    return 0;
}
