#include <bits/stdc++.h>
using namespace std;

string solve(string s, int k)
{
    string s1=s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            // leftside//
            for (int j = i; j >= i - min(i, k); j--)
            {
                if(s1[j]!='x')
                s1[j] = 'x';
            }
            //Main//
            if(s1[i]!='x')
            s1[i] = 'x';

            // Rightside//
            for (int j = i; j <= i + min(i, k); j++)
            {
                if(s1[j]!='x')
                s1[j] = 'x';
            }
        }
    }
    return s1;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s1[i] == 'x')
        {
            count++;
        }
    }
    // return count;
}

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << solve(s, k) << "\n";
}
