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

// put function// cout<<"Case #"<<p<<":";



int32_t main()
{
    int testcase;
    cin >> testcase;
    for (int p = 1; p <= testcase; p++)
    {
        string s;
        cin >> s;
        cout << "Case #" << p << ": ";
        int sttt = s.size();
        int sum = 0;
        for (int y = 0; y < sttt; y++)
            sum = sum + (s[y] - '0');
        int resul = 0;
        if (sum % 9 == 0)
            resul = 0;
        else
            resul = (9 - sum % 9);
        int new_sz = sttt + 1;
        string s2 = "9";
        string minimum_string = s;
        minimum_string.insert(0, s2);
        int j;
        int k = 0;
        if (resul == 0)
        {
            int summ=0;
            for (j = 1; j < new_sz; j++)
            {
                string res = s.substr(0, j);
                res = res + to_string(resul);
                res = res + s.substr(0 + j, sttt - j);
                if (res < minimum_string)
                    minimum_string = res;

                k++;sum+=j;
            }
        }
        else
        {
            for (j = 0; j < new_sz; j++)
            {
                string res = s.substr(0, j);
                res = res + to_string(resul);
                res = res + s.substr(0 + j, sttt - j);
                if (res < minimum_string)
                {
                    minimum_string = res;
                    k += 2;
                }
            }
        }
        cout << minimum_string << "\n";
    }
    return 0;
}
