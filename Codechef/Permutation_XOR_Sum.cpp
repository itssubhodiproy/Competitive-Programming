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
int func(int n)
{
    int number = 0, cnt = 0;int k=0;
    while (n)
    {
        k++;
        if (n % 2 == 0)
            number += (1LL << cnt);
        n /= 2, cnt++;
        if (n <= 0)
            break;
    }
    return number;
}

int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {

        int n;
        cin >> n;
        int answer = 0;int count=INT_MAX;
        while (n > 0)
        {
            count--;
            
            int a = func(n);
            int b = n;
            if ((b & (b + 1)) == 0)
                b--;
            int value = ((b * (b + 1)) / 2) - ((a * (a - 1)) / 2);
            answer += (value * 2);
            n = a - 1;
        }
        cout << answer << "\n";
    }
    return 0;
}
