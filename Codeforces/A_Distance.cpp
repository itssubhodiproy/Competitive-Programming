#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// { Driver Code Starts.
bool even(ll n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    return false;
}

bool odd(ll n)
{
    if (n % 2 != 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        ll x1, x2;
        cin>>x1>>x2;
        if ((x1 + x2) % 2 == 0)
        {
            if (x1 % 2 != 0){
                x1 = (x1 / 2) + 1;
                x2 = x2 / 2;
            }
            else if (x1 % 2 == 0)
            {
                x1 = (x1 / 2);
                x2 = x2 / 2;
            }
        }

        else
        {
            x1 = -1;
            x2 = -1;
        }
        cout << x1 << " " << x2 << "\n";
    }

    return 0;
} // } Driver Code Ends