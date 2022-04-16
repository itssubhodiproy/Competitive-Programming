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
    int x, y;
    cin >> x >> y;

    // printCase(z); //(For Google Competitions)
    // Code it Here
    if ((x % 2 == 1 && y % 2 == 1) || x <= 1 || y <= 1)
    {
        cout << "-1"
             << "\n";
        return;
    }

    // if both are even
    if (x % 2 == 0 && y % 2 == 0)
    {
        //
        string s1, s2;
        deque<char> d;
        // fill middle
        for (int i = 1; i <= x; i++)
        {
            d.push_back('a');
        }
        // psuh from front
        for (int i = 1; i <= y / 2; i++)
        {
            d.push_front('b');
        }
        // psuh from back
        for (int i = 1; i <= y / 2; i++)
        {
            d.push_back('b');
        }
        // s1 ready
        while (!d.empty())
        {
            s1.push_back(d.front());
            d.pop_front();
        }
        s2 = s1;
        swap(s2[0], s2[(s2.length() / 2) - 1]);
        swap(s2[s2.length() - 1], s2[(s2.length() / 2)]);
        cout << s1 << "\n";
        cout << s2 << "\n";
    }
    else
    {
        string s1, s2;
        deque<char> d;
        if (x % 2 == 1)
        {
            //
            for (int i = 1; i <= x; i++)
            {
                d.push_back('a');
            }
            for (int i = 1; i <= y / 2; i++)
            {
                d.push_front('b');
            }
            for (int i = 1; i <= y / 2; i++)
            {
                d.push_back('b');
            } // s1 ready
            while (!d.empty())
            {
                s1.push_back(d.front());
                d.pop_front();
            }
            s2 = s1;
            swap(s2[0], s2[(s2.length() / 2) - 1]);
            swap(s2[s2.length() - 1], s2[(s2.length() / 2) + 1]);
            cout << s1 << "\n";
            cout << s2 << "\n";
        }
        else
        {
            //
            for (int i = 1; i <= y; i++)
            {
                d.push_back('b');
            }
            for (int i = 1; i <= x / 2; i++)
            {
                d.push_front('a');
            }
            for (int i = 1; i <= x / 2; i++)
            {
                d.push_back('a');
            }
            while (!d.empty())
            {
                s1.push_back(d.front());
                d.pop_front();
            }
            s2 = s1;
            s2 = s1;
            swap(s2[0], s2[(s2.length() / 2) - 1]);
            swap(s2[s2.length() - 1], s2[(s2.length() / 2) + 1]);
            cout << s1 << "\n";
            cout << s2 << "\n";
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