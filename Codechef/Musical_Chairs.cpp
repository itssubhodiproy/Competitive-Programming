#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll Divisors(ll n)
{
    ll ans= 0;
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
               ans++;
            else // Otherwise print both
                ans+=2;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;cin>>n;
        cout<<Divisors(n-1)<<"\n";
    }
    return 0;
}