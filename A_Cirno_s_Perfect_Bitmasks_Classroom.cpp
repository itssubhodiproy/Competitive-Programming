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
int PositionRightmostSetbit(int n)
{
    if (n == 0)
        return 0;
    // Position variable initialize with 1
    // m variable is used to check the set bit
    int position = 1;
    int m = 1;

    while (!(n & m))
    {

        // left shift
        m = m << 1;
        position++;
    }
    return position;
}
// Code Here --------------------------------------------------------------------------------->>
void solve(int z)
{
    // Input//
    int n;
    cin >> n;
    // cout << (1 << 4) << nline;
    // return;
    if (n == 1 || n == 2)
    {
        cout << 3 << nline;
        return;
    }
    if (__builtin_popcountll(n) == 1)
    {
        cout << n + 1 << nline;
        return;
    }
    int pos = PositionRightmostSetbit(n);
    cout << (1 << (pos - 1)) << nline;

    // printCase(z); //(For Google Competitions)
    // Code it Here
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