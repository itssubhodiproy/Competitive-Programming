#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// #define all(x) x.begin(), x.end()

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;cin>>n;
        string s;
        ll i=97;
        while (n--)
        {
            if(i>122){
                i=97;
            }
            s.push_back((char)i);
            i++;
        }
        cout<<s<<"\n";
        
    }

    return 0;
}
