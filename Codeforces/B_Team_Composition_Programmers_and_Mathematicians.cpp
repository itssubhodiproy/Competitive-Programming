#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        ll a,b;cin>>a>>b;
        cout<<min ((a+b)/4, min(a,b))<<"\n";
    }

    return 0;
}