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
int printNcR(int n)
{
    if (n <= 1)
        return 0;
    int r = 2;
    long long p = 1, k = 1;

    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;

            // gcd of p, k
            long long m = __gcd(p, k);

            // dividing by gcd, to simplify
            // product division by their gcd
            // saves from the overflow
            p /= m;
            k /= m;

            n--;
            r--;
        }

        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }

    else
        p = 1;

    // if our approach is correct p = ans and k =1
    return p;
}
// Code Here --------------------------------------------------------------------------------->>
void solve(int z)
{
    // Input//
    int n;
    cin >> n;
    vi v;
    readVector(v, n);
    // cout << printNcR(3) << "\n";
    // return;

    // printCase(z); //(For Google Competitions)
    // Code it Here
    int one = 0, two = 0;
    for (auto it : v)
    {
        if (it == 1)
        {
            one++;
        }

        else if (it == 2)
        {
            two++;
        }
    }
    
    if (one == 0 && two < 2)
    {
        cout << '0' << '\n';
    }
    else
    {
        if (one == 0)
        {
            cout << printNcR(two) << '\n';
        }
        else
        {
            int ele = n - one;
            cout << (ele * one) + printNcR(one) + printNcR(two) << "\n";
        }
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