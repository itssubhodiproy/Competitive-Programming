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

// Code Here --------------------------------------------------------------------------------->>
void solve(int z)
{
    // Input//
    int n;
    cin >> n;
    string s;
    cin >> s;

    // printCase(z); //(For Google Competitions)
    // Code it Here
    if (n % 2 == 1)
    {
        cout << "NO"
             << "\n";
        return;
    }
    else
    {
        cout << "YES"
             << "\n";
        int zero = 0, one = 0;
        int ans = n / 2;
        for (auto it : s)
        {
            if (it == '1')
                one++;
            else
                zero++;
        }

        if (zero == one)
        {
            cout << 1 << " " << s.length() << "\n";
            return;
        }

        int ind1 = 0, ind2 = 0, diff = 0;

        int op1 = 0;
        if (one > zero)
        {
            int find = one - ans;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {

                    op1++;
                }
                else
                {
                    op1--;
                    // diff++;
                }
                if (op1 == find)
                {
                    ind2 = i + 1;

                    cout << 1 << " " << ind2 << "\n";
                    return;
                }
            }
        }
        else if (zero > one)
        {
            int find = zero - ans;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {

                    op1++;
                }
                else
                {
                    op1--;
                    // diff++;
                }
                if (op1 == find)
                {
                    ind2 = i + 1;

                    cout << 1 << " " << ind2 << "\n";
                    return;
                }
            }
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