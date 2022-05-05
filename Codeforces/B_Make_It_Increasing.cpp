/*Boil
NAME: SUBHODIP ROY
BRANCH: COMPUTER SCIENCE AND ENGINEERING
COLLEGE: NETAJI SUBHASH ENGINEERING COLLEGE
GITHUB: subh-23
CODEFORCES: subh_23
CODECHEF: subh_23
GRADUATION YEAR: 2024
*/
// Header Files and Macros//------------------------------------------------------------------>>
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
#define int long long int
#define float double
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define mod (int)1e9
#define printCase(x) cout << "Case #" << x << ": "
#define nline '\n'
#define yes cout << "YES" << nline;
#define no cout << "NO" << nline;
// GNU link : https://goo.gl/WVDL6g
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

// End Here//--------------------------------------------------------------------------------->>
void readVector(vi &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
}
void Print(int n)
{
    cout << n << nline;
}

// put function
int funNum(int n, int m)
{
    if (m == 0)
        return 0;
    while (n >= m)
    {
        n /= 2;
    }
    return n;
}
int funCount(int n, int m)
{
    if (m == 0)
        return 0;
    int count = 0;
    while (n >= m)
    {
        n /= 2;
        count++;
    }
    return count;
}
// Code Here --------------------------------------------------------------------------------->>
void solve(int z)
{
    // Input//
    int n;
    cin >> n;
    vi v;
    readVector(v, n);
    if (n == 1)
    {
        cout << 0 << nline;
        return;
    }

    // printCase(z); //(For Google Competitions)
    // Code it Here
    int count = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (v[i - 1] >= v[i])
        {
            count += funCount(v[i - 1], v[i]);
            v[i - 1] = funNum(v[i - 1], v[i]);
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            cout << "-1" << nline;
            return;
        }
    }
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    // cout << nline;

    cout << count << nline;
}
//-------------------------------------------------------------------------------------------->>
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int google = 1;
    cin >> google; // if not multiple testcase, remove it
    for (int i = 1; i <= google; i++)
    {
        solve(i);
    }
    return 0;
}
/*
INSTRUCTIONS TO KEEP IN MIND
-> Read the problem statement very clearly.
-> Dig deep into the problem statement and try to find the crispy part
   of the question (Basically Logic).
-> Find out how the crispy part is helping you to design the algorithm
   to solve the current question
-> Try to find the edgecases (Smaller & random cases).
-> Formulate the code in paper.
-> Code it.. Woohhhaaaahhh!! (Accepted)
*/