#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l1, l2, l3;
        cin >> l1 >> l2 >> l3;
        bool check;
        // where the 2 elements are same and the ramining element is even or not

        if (l1 == l2 || l2 == l3 || l1 == l3)
        {
            // 3 cases
            if (l1 == l2 && l3 % 2 == 0)
            {
                cout << "YES"
                 << "\n";
            }
            else if (l2 == l3 && l1 % 2 == 0)
            {
                cout << "YES"
                 << "\n";
            }
            else if (l1 == l3 && l2 % 2 == 0)
            {
                cout << "YES"
                 << "\n";
            }
            else
            {
                cout << "NO"
                 << "\n";
            }
        }

        // where all elements are different
        else
        {
            if (l1 > l2 && l1 > l3 && l2 + l3 == l1)
            {
                cout << "YES"
                 << "\n";
            }
            else if (l2 > l1 && l2 > l3 && l1 + l3 == l2)
            {

                cout << "YES"
                 << "\n";
            }
            else if (l3 > l2 && l3 > l1 && l1 + l2 == l3)
            {

                cout << "YES"
                 << "\n";
            }
            else
            {
                cout << "NO"
                 << "\n";
            }
        }
    }

    return 0;
}