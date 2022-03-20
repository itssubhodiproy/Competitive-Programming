/*
NAME: SUBHODIP ROY
BRANCH: COMPUTER SCIENCE AND ENGINEERING
COLLEGE: NETAJI SUBHASH ENGINEERING COLLEGE
GITHUB: subh-23
CODEFORCES: subh_23
CODECHEF: subh_23
GRADUATION YEAR: 2024
*/
             ------------------------------------------------->>>>>> testcase 1 OK............ testcase 2 TLE------------------------>>>>>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define float double
#define all(x) (x).begin(), (x).end()
#define vi vector<int>

// put function// cout<<"Case #"<<p<<":";

int minDistance(string word1, string word2)
{
    int n = word1.size();
    int m = word2.size();
    int t[n + 1][m + 1];
    // initilazitaion
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == 0 || j == 0)
                t[i][j] = 0;
        }
    }

    // main code
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            if (word1[i - 1] == word2[j - 1])
                t[i][j] = 1 + t[i - 1][j - 1];
            else
                t[i][j] = max(t[i][j - 1], t[i - 1][j]);
        }
    }
    if (t[n][m] < n)
    {
        return -1;
    }
    return (n - t[n][m]) + (m - t[n][m]);
}
int Sum(int n)
{
    string s = to_string(n);
    int sum = 0;
    for (auto it : s)
    {
        sum += it - '0';
    }
    return sum;
}
int MUL(int n)
{
    string s = to_string(n);
    int mul = 1;
    for (auto it : s)
    {
        mul *= it - '0';
    }
    return mul;
}
int32_t main()
{
    int testcase;
    cin >> testcase;
    for (int p = 1; p <= testcase; p++)
    {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << p << ": ";
        int count = 0;
        for (int number = a; number <= b; number++)
        {
            int sum = Sum(number);
            int mult = MUL(number);
            if (mult % sum == 0)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
