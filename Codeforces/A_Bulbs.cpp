#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n, m, num, y;
    cin >> n >> m;
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        
        for (int j = 0; j < y; j++)
        {
            cin >> num;
            s.insert(num);
        }
    }
    if (s.size() == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}