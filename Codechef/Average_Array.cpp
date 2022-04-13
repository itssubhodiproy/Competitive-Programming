/*Boil
NAME: SUBHODIP ROY
BRANCH: COMPUTER SCIENCE AND ENGINEERING
COLLEGE: NETAJI SUBHASH ENGINEERING COLLEGE
GITHUB: subh-23
CODEFORCES: subh_23
CODECHEF: subh_23
GRADUATION YEAR: 2024
*/
// Header Files and Macros//----------------------------------------------------------------->>
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

// Code Here -------------------------------------------------------------------------------->>
void solve(int z)
{
    int n; float x;
    vector<float> v;
    cin >> n >> x;
    float ans = n * x;
    float fl = n * x;

    // printCase(z); //(For Google Competitions)
    // Code it Here

    if (n <= 2)
    {
        // special treatment
        if (n == 2)
        {
            if (ans == 0)
            {
                cout << 1 << " " << -1 << "\n";
                // cout << 0 << " " << ans << "\n";
            }
            else
            {
                cout << 0 << " " << fl << "\n";
            }
        }
        else if (n == 1)
        {
            cout << fl << "\n";
        }
    }
    else
    {
        int count = 1;
        // push the array with inverse till n-1, lastly put n ans instead
        if (n % 2 == 1)
        {

            // if odd, NO fikr

            // push from front
            while (v.size() != (n - 1))
            {
                if (count == ans)
                {
                    count++;
                    continue;
                }
                v.push_back(count);
                v.push_back(-1 * count);
                count++;
            }
            v.push_back(fl);

            // print
        }
        else
        {
            count = 1;
            while (v.size() != (n - 2))
            {
                if (count == ans)
                {
                    count++;
                    continue;
                }
                v.push_back(count);
                v.push_back(-1 * count);
                count++;
            }
            if (ans == 0)
            {
                v.push_back(count);
                v.push_back(-1 * count);
            }
            else if (ans != 0)
            {
                v.push_back(0);
                v.push_back(fl);
            }
        }
        // print
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << '\n';
    }
}
//------------------------------------------------------------------------------------------>>
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
   of the question. (Basically Logic)
-> Find out how the crispy part is helping you to design the algorithm
   to solve the current question
-> Try to find the edgecases.
-> Formulate the code in paper.
-> Code it.. Woohhhaaaahhh!! (Accepted)
*/