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
    cout << n << '\n';
}

// put function

// Code Here --------------------------------------------------------------------------------->>
void solve(int z)
{
    // Input//
    int n, k;
    cin >> n >> k;
    vi v, ans, demo;
    readVector(v, n);
    unordered_map<int, int> m;

    // printCase(z); //(For Google Competitions)
    // Code it Here
    for (auto it : v)
        m[it]++;

    v.clear();
    // take only more than k numbers
    for (auto it : m)
        if (it.second >= k)
            v.push_back(it.first);

    if (v.size() == 0)
    {
        cout << "-1" << nline;
        return;
    }
    sort(all(v));

    // for (auto it : ans)
    //     cout << it << " ";
    // cout << nline;
    // return;

    int first = 0, second = 0;
    int maxi = 0;
    int count = 0, prev = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == prev + 1)
            count++;
        else
            count = 1;

        if (count > maxi)
        {
            maxi = count;
            second = v[i];
            first = v[i] - maxi + 1;
        }
        prev = v[i];
    }

    // cout<<nline;
    // cout<<nline;
    cout << first << " " << second << nline;

    // cout << first << " " << second << nline;
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