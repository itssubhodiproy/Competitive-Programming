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
#define float double
#define all(x) (x).begin(), (x).end()
#define vi vector<int>

// put function

int32_t main()
{
    string s;
    cin >> s;
    string::size_type girl, boy;
    girl = boy = 0;
    for (string::size_type i = 0; i < s.length(); i++)
    {
        if (s[i] == 'B')
        {
            boy++;
        }
        else
        {
            girl++;
        }
    }
    string should;

    if (girl > boy)
    {
        // GIRL DOMINATING STRING
        for (string::size_type i = 0; i < boy; i++)
        {
            should.push_back('G');
            should.push_back('B');
        }
        should.push_back('G');
    }
    else if (boy > girl)
    {
        // GIRL DOMINATING STRING
        for (string::size_type i = 0; i < girl; i++)
        {

            should.push_back('B');
            should.push_back('G');
        }
        should.push_back('B');
    }
    else
    {
        // If both are equal
        if (s[0] == 'B')
        {
            for (string::size_type i = 0; i < girl; i++)
            {

                should.push_back('B');
                should.push_back('G');
            }
        }
        else
        {
            for (string::size_type i = 0; i < girl; i++)
            {

                should.push_back('G');
                should.push_back('B');
            }
        }
    }
    int inc = 0;
    // Now check for the incorrect positions
    for (string::size_type i = 0; i < s.length(); i++)
    {
        if (s[i] == should[i])
        {
            continue;
        }
        inc++;
    }
    cout << inc / 2 << '\n';
    return 0;
}
