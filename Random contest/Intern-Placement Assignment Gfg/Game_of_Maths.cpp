#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll m, n;
        cin >> m >> n;
        char op;
        ll input;
        while (n--)
        {
            cin >> op >> input;
            if (op == 'A')
            {
                m = m + input;
                cout<<m<<"\n";
            }
            else if (op == 'S')
            {
                m = m - input;
                cout<<m<<"\n";
            }
            else if (op == 'D')
            {
                m = m / input;
                cout<<m<<"\n";
            }
            else if (op == 'M')
            {
                m = m * input;
                cout<<m<<"\n";
            }
        }
        
    }

    return 0;
}