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
    int m, n;
    cin >> m >> n;
    vector<vi> v, sorted;
    for (int i = 0; i < m; i++)
    {
        vi dummy;
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            dummy.push_back(num);
        }
        v.push_back(dummy);
    }

    // printCase(z); //(For Google Competitions)
    // Code it Here

    for (auto it : v)
    {
        vi dummy;
        for (auto jt : it)
        {
            dummy.push_back(jt);
        }
        sort(all(dummy));
        sorted.push_back(dummy);
    }
    unordered_set<int> s;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] != sorted[i][j])
                s.insert(j);
        }
    }
    if (s.size() == 0)
    {
        cout << 1 << " " << 1 << nline;
        return;
    }
    if (s.size() != 2)
    {
        cout << "-1" << nline;
        return;
    }
    else
    {
        int j1, j2;
        queue<int> q;
        for (auto it : s)
            q.push(it);
        j1 = q.front();
        q.pop();
        j2 = q.front();

        // do swapping
        for (int i = 0; i < m; i++)
            swap(v[i][j1], v[i][j2]);
        if (v == sorted)
            cout << j1 + 1 << " " << j2 + 1 << nline;
        else
            cout << -1 << nline;
    }
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