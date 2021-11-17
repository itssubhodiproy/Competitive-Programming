#include <bits/stdc++.h>
using namespace std;

bool even(int a, int b)
{
    if ((a + b) % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        if (a == b && p == q && a == p && b == q && a == q && b == p)
        {
            cout << 0 << "\n";
            continue;
        }
        if (a == p && b == q)
        {
            cout << 0 << "\n";
            continue;
        }

        if (even(a, b) && even(p, q))
        {
            cout << 2 << "\n";
        }
        else if (even(a, b) == false && even(p, q) == false)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
    return 0;
}