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
#define int long long int
#define dd double

// put function

int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        // inputs
        int n, x, y;
        cin >> n >> x >> y;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // check whether the sum of array is odd or even
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        //if x is even and y is even, then we need sum as odd to reach x to y
        if ((x % 2 == y % 2 && sum % 2 == 0) || (x % 2 != y % 2 && sum % 2 == 1))
        {
            cout << "Alice" << '\n';
        }
        else
        {
            cout << "Bob" << '\n';
        }
    }
    return 0;
}
